#include "gtest/gtest.h"
#include "operations.h"
#include "utils/utils.h"

TEST(MultiplyTest, Basic) {
    EXPECT_EQ(30, multiply(5, 6));
}

TEST(UtilityFunctionTest, CheckReturn) {
    EXPECT_EQ(42, utilityFunction());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
