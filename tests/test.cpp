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

// Constructor Tests

TEST(ConstructorTest, DefaultConstructor){

	Rectangle test;
	EXPECT_EQ(0, test.getWidth() + test.getHeight());

}

TEST(ConstructorTest, ParameterizedConstructor){

	Rectangle test(4, 6);
	EXPECT_EQ(4, test.getWidth());
	EXPECT_EQ(6, test.getHeight());

}

TEST(ConstructorTest, ParameterizedContructorWithNegativeWidth){

	Rectangle test(-5, 5);
	EXPECT_EQ(-5, test.getWidth());
	EXPECT_EQ(5, test.getHeight());

}

// Area Tests

TEST(AreaTest, DefaultConstructorArea){

	Rectangle test;
	EXPECT_EQ(0, test.area());

}

TEST(AreaTest, ParameterizedConstructorWithPositiveNums){

	Rectangle test(3, 4);
	EXPECT_EQ(3 * 4, test.area());

}

TEST(AreaTest, ParameterizedConstructorWithNegativeWidth){

	Rectangle test(-5, 5);
	EXPECT_EQ(-5 * 5, test.area());

}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

