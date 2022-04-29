#include "../header/rectangle.hpp"

#include "gtest/gtest.h"

TEST(PerimeterTest, TwobyFour){
	Rectangle test(2,4);
	int val = test.perimeter();
	EXPECT_EQ(12,val);
}

TEST(PerimeterTest, ZerobyZero){
	Rectangle test(0,0);
	int val = test.perimeter();
	EXPECT_EQ(0,val);
}
TEST(PerimeterTest, OneByOne){
	Rectangle test(1,1);
	int val = test.perimeter();
	EXPECT_EQ(4,val);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

