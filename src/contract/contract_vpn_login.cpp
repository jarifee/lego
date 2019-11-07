#include "contract/contract_vpn_login.h"

#include "contract/contract_utils.h"

namespace lego {

namespace contract {

int VpnLogin::InitWithAttr(uint64_t block_height, bft::TxItemPtr& tx_item) {
    return kContractSuccess;
}

int VpnLogin::GetAttrWithKey(const std::string& key, std::string& value) {
    return kContractSuccess;
}

int VpnLogin::Execute(bft::TxItemPtr& tx_item) {
    return kContractSuccess;
}

}  // namespace contract

}  // namespace lego
