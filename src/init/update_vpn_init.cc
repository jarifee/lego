#include "init/update_vpn_init.h"

#include <memory>

#include "common/country_code.h"
#include "common/time_utils.h"
#include "common/split.h"
#include "common/string_utils.h"
#include "dht/dht_key.h"
#include "network/network_utils.h"
#include "network/universal.h"
#include "network/universal_manager.h"

namespace lego {

namespace init {

UpdateVpnInit* UpdateVpnInit::Instance() {
    static UpdateVpnInit ins;
    return &ins;
}

UpdateVpnInit::UpdateVpnInit() {
    {
        std::string cns = "AU,CA,CN,DE,FR,GB,HK,IN,JP,NL,SG,US";
        common::Split country_split(cns.c_str(), ',', cns.size());
        std::lock_guard<std::mutex> guard(country_vec_mutex_);
        country_vec_.clear();
        for (int cnt_idx = 0; cnt_idx < country_split.Count(); ++cnt_idx) {
            if (country_split.SubLen(cnt_idx) == 2) {
                country_vec_.push_back(country_split[cnt_idx]);
            }
        }
    }

    GetVpnNodes();
}

UpdateVpnInit::~UpdateVpnInit() {}

bool UpdateVpnInit::InitSuccess() {
    std::lock_guard<std::mutex> guard(vpn_nodes_map_mutex_);
    return !vpn_nodes_map_.empty() && !ver_buf_[valid_idx_].empty();
}

std::string UpdateVpnInit::GetVpnServerNodes() {
    std::string res;
    std::lock_guard<std::mutex> guard(vpn_nodes_map_mutex_);
    for (auto iter = vpn_nodes_map_.begin(); iter != vpn_nodes_map_.end(); ++iter) {
        std::string tmp_str = iter->first + ":";
        std::vector<std::string> tmp_vec;
        std::vector<int> pos_vec;
        int idx = 0;
        auto tmp_queue = iter->second;
        while (!tmp_queue.empty()) {
            auto node = tmp_queue.front();
            std::string node_str = node->ip + "_" + node->dht_key + "_" + node->pubkey;
            tmp_vec.push_back(node_str);
            pos_vec.push_back(idx++);
        }

        if (pos_vec.size() > 4) {
            std::random_shuffle(pos_vec.begin(), pos_vec.end());
        }

        std::string node_str;
        for (int i = 0; i < pos_vec.size(); ++i) {
            if (i >= 4) {
                break;
            }

            node_str += tmp_vec[pos_vec[i]] + "-";
        }

        tmp_str += node_str;
        res += tmp_str + ",";
    }
    return res;
}

std::string UpdateVpnInit::GetRouteServerNodes() {
    std::string res;
    std::lock_guard<std::mutex> guard(route_nodes_map_mutex_);
    for (auto iter = route_nodes_map_.begin(); iter != route_nodes_map_.end(); ++iter) {
        std::string tmp_str = iter->first + ":";
        std::vector<std::string> tmp_vec;
        std::vector<int> pos_vec;
        int idx = 0;
        auto tmp_queue = iter->second;
        while (!tmp_queue.empty()) {
            auto node = tmp_queue.front();
            std::string node_str = node->ip + "_" + node->dht_key + "_" + node->pubkey;
            tmp_vec.push_back(node_str);
            pos_vec.push_back(idx++);
        }

        if (pos_vec.size() > 4) {
            std::random_shuffle(pos_vec.begin(), pos_vec.end());
        }

        std::string node_str;
        for (int i = 0; i < pos_vec.size(); ++i) {
            if (i >= 4) {
                break;
            }

            node_str += tmp_vec[pos_vec[i]] + "-";
        }

        tmp_str += node_str;
        res += tmp_str + ",";
    }
    return res;
}

void UpdateVpnInit::SetVersionInfo(const std::string& ver) {
    uint32_t idle_idx = (valid_idx_ + 1) % 2;
    ver_buf_[idle_idx] = ver;
    valid_idx_ = idle_idx;

    common::Split splits(ver.c_str(), ',', ver.size());
    for (uint32_t split_idx = 0; split_idx < splits.Count(); ++split_idx) {
        common::Split tmp_split(splits[split_idx], ';', splits.SubLen(split_idx));
        if (tmp_split.Count() >= 2) {
            if (memcmp(tmp_split[0], "free_max_bw", strlen("free_max_bw")) == 0) {
                try {
                    max_free_bandwidth_ = common::StringUtil::ToUint64(tmp_split[1]);
                } catch (...) {}
            }

            if (memcmp(tmp_split[0], "vip_max_bw", strlen("vip_max_bw")) == 0) {
                try {
                    max_vip_bandwidth_ = common::StringUtil::ToUint64(tmp_split[1]);
                } catch (...) {}
            }

            if (memcmp(tmp_split[0], "vpn_country", strlen("vpn_country")) == 0) {
                common::Split country_split(tmp_split[1], '1', tmp_split.SubLen(1));
                std::lock_guard<std::mutex> guard(country_vec_mutex_);
                country_vec_.clear();
                for (int cnt_idx = 0; cnt_idx < country_split.Count(); ++cnt_idx) {
                    if (country_split.SubLen(cnt_idx) == 2) {
                        country_vec_.push_back(country_split[cnt_idx]);
                    }
                }
            }
        }
    }
}

void UpdateVpnInit::GetVpnNodes() {
    std::vector<std::string> country_vec;
    {
        std::lock_guard<std::mutex> guard(country_vec_mutex_);
        country_vec = country_vec_;
    }

    GetNetworkNodes(country_vec, network::kVpnNetworkId);
    GetNetworkNodes(country_vec, network::kVpnRouteNetworkId);
    update_vpn_nodes_tick_.CutOff(
            kGetVpnNodesPeriod,
            std::bind(&UpdateVpnInit::GetVpnNodes, this));
}

void UpdateVpnInit::GetNetworkNodes(
        const std::vector<std::string>& country_vec,
        uint32_t network_id) {
    for (uint32_t i = 0; i < country_vec.size(); ++i) {
        auto country = country_vec[i];
        auto uni_dht = std::dynamic_pointer_cast<network::Universal>(
            network::UniversalManager::Instance()->GetUniversal(
                network::kUniversalNetworkId));
        if (!uni_dht) {
            continue;
        }

        auto dht_nodes = uni_dht->LocalGetNetworkNodes(
                (uint32_t)network_id,
                (uint8_t)common::global_country_map[country],
                (uint32_t)4);
        if (dht_nodes.empty()) {
            dht_nodes = uni_dht->RemoteGetNetworkNodes(
                    (uint32_t)network_id,
                    (uint8_t)common::global_country_map[country],
                    (uint32_t)4);
            if (dht_nodes.empty()) {
                continue;
            }
        }

        for (auto iter = dht_nodes.begin(); iter != dht_nodes.end(); ++iter) {
            auto& tmp_node = *iter;
            auto node_ptr = std::make_shared<VpnServerNode>(
                    tmp_node->public_ip,
                    0,
                    0,
                    "",
                    common::Encode::HexEncode(tmp_node->dht_key),
                    common::Encode::HexEncode(tmp_node->pubkey_str),
                    "",
                    true);
            uint32_t node_netid = dht::DhtKeyManager::DhtKeyGetNetId(tmp_node->dht_key);
            if (node_netid == network::kVpnNetworkId) {
                std::lock_guard<std::mutex> guard(vpn_nodes_map_mutex_);
                auto sub_iter = vpn_nodes_map_.find(country);
                if (sub_iter != vpn_nodes_map_.end()) {
                    auto e_iter = std::find_if(
                        sub_iter->second.begin(),
                        sub_iter->second.end(),
                            [node_ptr](const VpnServerNodePtr& ptr) {
                                return (node_ptr->ip == ptr->ip &&
                                        node_ptr->svr_port == ptr->svr_port);
                            });
                    if (e_iter == sub_iter->second.end()) {
                        sub_iter->second.push_back(node_ptr);
                        if (sub_iter->second.size() > 256) {
                            sub_iter->second.pop_front();
                        }
                    }
                }
            }

            if (node_netid == network::kVpnRouteNetworkId) {
                std::lock_guard<std::mutex> guard(route_nodes_map_mutex_);
                auto sub_iter = route_nodes_map_.find(country);
                if (sub_iter != route_nodes_map_.end()) {
                    auto e_iter = std::find_if(
                            sub_iter->second.begin(),
                            sub_iter->second.end(),
                            [node_ptr](const VpnServerNodePtr& ptr) {
                        return node_ptr->dht_key == ptr->dht_key;
                    });

                    if (e_iter == sub_iter->second.end()) {
                        sub_iter->second.push_back(node_ptr);
                        if (sub_iter->second.size() > 256) {
                            sub_iter->second.pop_front();
                        }
                    }
                }
            }
        }
    }
}

}  // namespace init

}  // namespace lego