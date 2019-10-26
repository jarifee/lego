#include "limit/tocken_bucket.h"

#include "common/time_utils.h"

namespace lego {

namespace limit {

bool TockenBucket::UpCheckLimit(uint32_t stream) {
    auto period_ms = common::TimeUtils::PeriodMs(pre_up_timestamp_);
    if (period_ms >= kIncreaseTockenPeriod) {
        up_tockens_ += static_cast<int32_t>(period_ms * tockens_add_per_ms_);
        if (up_tockens_ > max_tockens_) {
            up_tockens_ = max_tockens_;
        }
        pre_up_timestamp_ = std::chrono::system_clock::now();
    }

    auto period_ms = common::TimeUtils::PeriodMs(pre_down_timestamp_);
    if (period_ms >= kIncreaseTockenPeriod) {
        down_tockens_ += static_cast<uint32_t>(period_ms * tockens_add_per_ms_);
        if (down_tockens_ > max_tockens_) {
            down_tockens_ = max_tockens_;
        }
        pre_down_timestamp_ = std::chrono::system_clock::now();
        if (down_tockens_ > 1024) {
            download_valid_ = true;
        }
    }

    if (!download_valid_) {
        return false;
    }

    if (up_tockens_ < stream) {
        return false;
    }

    up_tockens_ -= stream;
    std::cout << "up tokens: " << up_tockens_ << std::endl;
    return true;
}

bool TockenBucket::DownCheckLimit(uint32_t stream) {
    auto period_ms = common::TimeUtils::PeriodMs(pre_down_timestamp_);
    if (period_ms >= kIncreaseTockenPeriod) {
        down_tockens_ += static_cast<uint32_t>(period_ms * tockens_add_per_ms_);
        if (down_tockens_ > max_tockens_) {
            down_tockens_ = max_tockens_;
        }
        pre_down_timestamp_ = std::chrono::system_clock::now();
    }

    if (down_tockens_ < stream) {
        download_valid_ = false;
        return false;
    }

    down_tockens_ -= stream;
    download_valid_ = true;
    std::cout << "down tokens: " << up_tockens_ << std::endl;

    return true;
}


}  // namespace limit

}  // namespace lego
