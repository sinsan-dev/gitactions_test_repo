#include "hello.h"
#include <gtest/gtest.h>

TEST(ClassifyNumberTest, Positive) {
    EXPECT_EQ(classify_number(10), 1);
}

TEST(ClassifyNumberTest, Zero) {
    EXPECT_EQ(classify_number(0), 0);
}

TEST(ClassifyNumberTest, Negative) {
    EXPECT_EQ(classify_number(-5), -1);
}
