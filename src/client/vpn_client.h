#pragma once

#include <vector>
#include <memory>
#include <string>
#include <cstdint>
#include <mutex>
#include <unordered_map>
#include <map>
#include <set>
#include <deque>

namespace lego {

namespace transport {
    class Transport;
    typedef std::shared_ptr<Transport> TransportPtr;
    namespace protobuf {
        class Header;
    }
}  // namespace transport

namespace dht {
    class Node;
    typedef std::shared_ptr<Node> NodePtr;
    class BaseDht;
    typedef std::shared_ptr<BaseDht> BaseDhtPtr;
}  // namespace dht

namespace client {

class ClientUniversalDht;
typedef std::shared_ptr<ClientUniversalDht> ClientUniversalDhtPtr;
namespace protobuf {
    class Block;
    typedef std::shared_ptr<Block> BlockPtr;
    class AccountHeightResponse;
    class GetTxBlockResponse;
    class GetVpnInfoResponse;
}  // namespace protobuf

struct VpnServerNode {
    VpnServerNode(
            const std::string& in_ip,
            uint16_t in_port,
            const std::string& enc_type,
            const std::string& pwd,
            const std::string& dkey,
            bool new_node)
            : ip(in_ip),
              port(in_port),
              encrypt_type(enc_type),
              passwd(pwd),
              dht_key(dkey),
              new_get(new_node) {}
    std::string ip;
    uint16_t port;
    std::string encrypt_type;
    std::string passwd;
    std::string dht_key;
    bool new_get{ false };
};
typedef std::shared_ptr<VpnServerNode> VpnServerNodePtr;

struct TxInfo {
    TxInfo(
            const std::string& in_to,
            uint64_t in_balance,
            uint32_t h,
            const std::string& hash,
            const protobuf::BlockPtr& in_block)
            : to(in_to), balance(in_balance), height(h),
              block_hash(hash), block_ptr(in_block) {}
    std::string to;
    uint64_t balance;
    uint32_t height;
    std::string block_hash;
    protobuf::BlockPtr block_ptr;
};
typedef std::shared_ptr<TxInfo> TxInfoPtr;

class VpnClient {
public:
    static VpnClient* Instance();
    std::string Init(
            const std::string& local_ip,
            uint16_t local_port,
            const std::string& bootstrap,
            const std::string& conf_path,
            const std::string& log_path,
            const std::string& log_conf_path);
    std::string Init(const std::string& conf);
    std::string GetVpnServerNodes(
            const std::string& country,
            uint32_t count,
            std::vector<VpnServerNodePtr>& nodes);
    std::string Transaction(const std::string& to, uint64_t amount, std::string& tx_gid);
    std::string GetTransactionInfo(const std::string& tx_gid);
    TxInfoPtr GetBlockWithGid(const std::string& gid);
    TxInfoPtr GetBlockWithHash(const std::string& block_hash);
    int GetSocket();
    bool ConfigExists(const std::string& conf_path);
    bool IsFirstInstall() {
        return first_install_;
    }
    bool SetFirstInstall();
    std::string Transactions(uint32_t begin, uint32_t len);
    int64_t GetBalance();
    void VpnHeartbeat(const std::string& dht_key);
    int ResetTransport(const std::string& ip, uint16_t port);

private:
    VpnClient();
    ~VpnClient();

    void HandleMessage(transport::protobuf::Header& header);
    void HandleBlockMessage(transport::protobuf::Header& header);
    void HandleServiceMessage(transport::protobuf::Header& header);
    int InitTransport();
    int SetPriAndPubKey(const std::string& prikey);
    int InitNetworkSingleton();
    void GetVpnNodes();
    int CreateClientUniversalNetwork();
    void CheckTxExists();
    void WriteDefaultLogConf(
            const std::string& log_conf_path,
            const std::string& log_path);
    void GetAccountHeight();
    void GetAccountBlockWithHeight();
    void HandleHeightResponse(const protobuf::AccountHeightResponse& height_res);
    void HandleBlockResponse(const protobuf::GetTxBlockResponse& block_res);
    void HandleGetVpnResponse(
            const protobuf::GetVpnInfoResponse& vpn_res,
            const std::string& dht_key);
    void DumpVpnNodes();
    void ReadVpnNodesFromConf();

    static const uint32_t kDefaultUdpSendBufferSize = 10u * 1024u * 1024u;
    static const uint32_t kDefaultUdpRecvBufferSize = 10u * 1024u * 1024u;
    static const uint32_t kTestCreateAccountPeriod = 100u * 1000u;
    static const int64_t kTestNewElectPeriod = 10ll * 1000ll * 1000ll;
    static const uint32_t kCheckTxPeriod = 1000 * 1000;
    static const uint32_t kGetVpnNodesPeriod = 3 * 1000 * 1000;
    static const uint32_t kHeightMaxSize = 1024u;

    transport::TransportPtr transport_{ nullptr };
    bool inited_{ false };
    std::mutex init_mutex_;
    ClientUniversalDhtPtr root_dht_{ nullptr };
    bool root_dht_joined_{ false };
    bool client_mode_{ true };
    uint32_t send_buff_size_{ kDefaultUdpSendBufferSize };
    uint32_t recv_buff_size_{ kDefaultUdpRecvBufferSize };
    std::unordered_map<std::string, TxInfoPtr> tx_map_;
    std::mutex tx_map_mutex_;
    bool first_install_{ false };
    std::string config_path_;
    std::map<uint64_t, std::string> hight_block_map_;
    std::mutex hight_block_map_mutex_;
    std::set<uint64_t> height_set_;
    std::mutex height_set_mutex_;
    uint32_t check_times_{ 0 };
    bool got_block_{ false };
    std::map<std::string, std::deque<VpnServerNodePtr>> vpn_nodes_map_;
    std::mutex vpn_nodes_map_mutex_;
};

}  // namespace client

}  // namespace lego
