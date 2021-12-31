#include<iostream>
#include<gtest/gtest.h>
#include "libraryCode.h"


TEST(TestSample, isPositive)
{
    ASSERT_TRUE(isPositive(3));
}

TEST(TestSample, countPositive)
{
    //Arrange.
    std::vector<int> x = {1,2,3,4,5};

    //Act.
    int count = countPositive(x);
    
    //Assert.
    ASSERT_EQ(5, countPositive(x));
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}