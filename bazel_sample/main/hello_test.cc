#include "hello.h"
#include <gtest/gtest.h>

TEST(分類テスト, テスト1_正の値) {
    EXPECT_EQ(classify_number(10), 1);
}

TEST(分類テスト, テスト2_ゼロ) {
    EXPECT_EQ(classify_number(0), 0);
}

TEST(分類テスト, テスト3_負の値) {
    EXPECT_EQ(classify_number(-5), 0);  // ← 故意に失敗
}
