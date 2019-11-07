#pragma once

#include <thread>
#include <memory>
#include <unordered_map>
#include <queue>

#include "common/tick.h"
#include "common/thread_safe_queue.h"
#include "block/proto/block.pb.h"
#include "contract/proto/contract.pb.h"
#include "transport/proto/transport.pb.h"
#include "services/vpn_server/vpn_svr_utils.h"
#include "services/vpn_server/server.h"

namespace lego {

namespace vpn {

class VpnServer {
public:
    static VpnServer* Instance();
    int Init();
    int ParserReceivePacket(const char* buf);
    void Stop();

    common::ThreadSafeQueue<StakingItemPtr>& staking_queue() {
        return staking_queue_;
    }

    common::ThreadSafeQueue<BandwidthInfoPtr>& bandwidth_queue() {
        return bandwidth_queue_;
    }

    std::shared_ptr<listen_ctx_t> last_listen_ptr() {
        return last_listen_ptr_;
    }

private:
    VpnServer();
    ~VpnServer();
    void CheckTransactions();
    void CheckAccountValid();
    void SendGetAccountAttrLastBlock(
            const std::string& attr,
            const std::string& account,
            uint64_t height);
    void HandleMessage(transport::protobuf::Header& header);
    void HandleVpnLoginResponse(
            transport::protobuf::Header& header,
            block::protobuf::BlockMessage& block_msg);
    void HandleClientBandwidthResponse(
            transport::protobuf::Header& header,
            contract::protobuf::ContractMessage& contract_msg);
    void RotationServer();
    void StartMoreServer();
    void SendGetAccountAttrUsedBandwidth(const std::string& account);

    static const uint32_t kStakingCheckingPeriod = 10 * 1000 * 1000;
    static const uint32_t kAccountCheckPeriod = 10 * 1000 * 1000;
    static const uint32_t kConnectInitBandwidth = 10 * 1024 * 1024;
    static const uint32_t kAddBandwidth = 50 * 1024 * 1024;

    common::ThreadSafeQueue<StakingItemPtr> staking_queue_;
    common::ThreadSafeQueue<BandwidthInfoPtr> bandwidth_queue_;
    common::Tick staking_tick_;
    common::Tick bandwidth_tick_;
    std::unordered_map<std::string, StakingItemPtr> gid_map_;
    std::unordered_map<std::string, BandwidthInfoPtr> account_map_;
    std::mutex account_map_mutex_;
    std::deque<std::shared_ptr<listen_ctx_t>> listen_ctx_queue_;
    common::Tick new_vpn_server_tick_;
    std::shared_ptr<listen_ctx_t> last_listen_ptr_{ nullptr };
    std::set<uint16_t> started_port_set_;

    DISALLOW_COPY_AND_ASSIGN(VpnServer);
};

}  // namespace vpn

}  // namespace lego
