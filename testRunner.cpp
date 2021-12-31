#include<iostream>
#include<gtest/gtest.h>
#include "libraryCode.h"

TEST(SquareRootTest, NegativeArgumentTest)
{
    double inputValue = -8;
    
    ASSERT_THROW(mySqrt(inputValue), std::runtime_error);
    ASSERT_ANY_THROW(mySqrt(inputValue));   
}

TEST(SquareRootTest, PositiveArgumentTest)
{
    double inputValue = 9;

    ASSERT_NO_THROW(mySqrt(inputValue));
    ASSERT_EQ(3, mySqrt(inputValue));
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}