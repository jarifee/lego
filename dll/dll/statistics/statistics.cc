#include "stdafx.h"
#include "statistics/statistics.h"

#include "common/encode.h"
#include "block/account_manager.h"

namespace lego {

namespace statis {

Statistics* Statistics::Instance() {
    static Statistics ins;
    return &ins;
}

Statistics::Statistics() {
    statis_tick_.CutOff(kTpsUpdatePeriod, std::bind(&Statistics::StatisUpdate, this));
    period_begin_ = std::chrono::steady_clock::now();
    uint64_t amount = 100000;
    uint32_t addr_count = 0;
    for (uint32_t i = 0; i < kMaxQueueSize; ++i) {
        auto rand_num = std::rand() % 10000;
        tps_queue_.push_back((float)rand_num * 10.0 / 10000.0);
        addr_count += std::rand() % 2;
        addr_q_.push_back(addr_count);
        tx_count_q_.push_back(std::rand() % 3000);
        amount += std::rand() % 2000;
        tx_amount_q_.push_back(amount);
    }
}

Statistics::~Statistics() {}

void Statistics::StatisUpdate() {
    addr_count_ = block::AccountManager::Instance()->addr_count();
    std::lock_guard<std::mutex> gaurd(change_mutex_);
    float tps = (float)period_tx_count_ / 10.0;
    tps_queue_.push_back(tps);
    period_tx_count_ = 0;
    if (tps_queue_.size() > kMaxQueueSize) {
        tps_queue_.pop_front();
    }

    auto tick_now = std::chrono::steady_clock::now();
    auto period_tick = period_begin_ + std::chrono::minutes(60);
    if (tick_now >= period_tick) {
        addr_q_.push_back(addr_count_);
        period_begin_ = tick_now;
        tx_count_q_.push_back(tx_count_);
        tx_count_ = 0;
        tx_amount_q_.push_back(tx_amount_);
        tx_amount_ = 0;
        if (tx_count_q_.size() > kMaxQueueSize) {
            tx_count_q_.pop_front();
        }

        if (tx_amount_q_.size() > kMaxQueueSize) {
            tx_amount_q_.pop_front();
        }

        if (addr_q_.size() > kMaxQueueSize) {
            addr_q_.pop_front();
        }
    }
    all_acc_lego_ = block::AccountManager::Instance()->all_acc_lego();
    acc_addr_ptr_ = block::AccountManager::Instance()->acc_map_ptr();
    {
        std::lock_guard<std::mutex> guard(acc_pri_q_mutex_);
        while (!acc_pri_q_.empty()) {
            acc_pri_q_.pop();
        }
        for (auto iter = acc_addr_ptr_->begin(); iter != acc_addr_ptr_->end(); ++iter) {
            AddNewAccount(iter->second);
        }
    }
    statis_tick_.CutOff(kTpsUpdatePeriod, std::bind(&Statistics::StatisUpdate, this));
}

void Statistics::AddNewAccount(const block::AccountInfoPtr& acc_ptr) {
    auto ratio = (double)acc_ptr->balance / (double)all_acc_lego_;
    if (ratio < 0.01) {
        return;
    }

    acc_pri_q_.push(acc_ptr);
    if (acc_pri_q_.size() > 1000) {
        acc_pri_q_.pop();
    }
}

void Statistics::GetBestAddr(nlohmann::json& res_json) {
    PriQueue addr_q;
    {
        std::lock_guard<std::mutex> guard(acc_pri_q_mutex_);
        addr_q = acc_pri_q_;
    }

    uint32_t index = 0;
    std::set<std::string> id_set;
    while (!addr_q.empty()) {
        block::AccountInfoPtr addr = addr_q.top();
        addr_q.pop();
        if (id_set.find(addr->account_id) != id_set.end()) {
            continue;
        }
        id_set.insert(addr->account_id);
        res_json[index]["id"] = common::Encode::HexEncode(addr->account_id);
        res_json[index]["balance"] = addr->balance;
        res_json[index]["ratio"] = (double)addr->balance / (double)all_acc_lego_;
        ++index;
    }
}

}  // namespace statis

}  // namespace lego