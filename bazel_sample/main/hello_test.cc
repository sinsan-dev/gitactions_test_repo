#include "hello.h"
#include <gtest/gtest.h>
#include <iostream>

TEST(分類テスト, テスト1_正の値) {
    std::cout << "★ TEST 1 実行中" << std::endl;
    EXPECT_EQ(classify_number(10), 1);
}

TEST(分類テスト, テスト2_ゼロ) {
    std::cout << "★ TEST 2 実行中" << std::endl;
    EXPECT_EQ(classify_number(0), 0);
}

TEST(分類テスト, テスト3_負の値) {
    std::cout << "★ TEST 3 実行中" << std::endl;
    EXPECT_EQ(classify_number(-5), -1);  // 故意に失敗させてもよい
}
