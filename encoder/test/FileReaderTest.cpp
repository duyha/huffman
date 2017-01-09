#include <gtest/gtest.h>

TEST(FileReaderTests, Construction) {
  EXPECT_EQ(10, 9);
}

int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv );
        return RUN_ALL_TESTS();
}
