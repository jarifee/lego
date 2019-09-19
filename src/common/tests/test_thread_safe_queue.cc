#include <gtest/gtest.h>

#include <iostream>
#include <chrono>
#include <thread>

#define private public
#include "common/thread_safe_queue.h"

namespace lego {

namespace common {

namespace test {

class TestThreadSafeQueue : public testing::Test {
public:
    static void SetUpTestCase() {
    }

    static void TearDownTestCase() {
    }

    virtual void SetUp() {
    }

    virtual void TearDown() {
    }

private:

};


common::ThreadSafeQueue<std::string> test_queue;

static void thread1() {
    int i = 0;
    while (i++ < 100000) {
        test_queue.push("test_string_" + std::to_string(i));
    }
}

static void thread2() {
    int read_num = 0;
    while (read_num < 100000) {
        std::string item;
        if (test_queue.pop(&item)) {
            std::cout << "get item: " << item << std::endl;
            ++read_num;
        }
    }
}

TEST_F(TestThreadSafeQueue, Hash32) {
    std::thread t1(thread1);
    std::thread t2(thread2);
    t1.join();
    t2.join();
}

}  // namespace test

}  // namespace common

}  // namespace lego