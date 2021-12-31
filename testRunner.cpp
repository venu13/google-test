#include<iostream>
#include<gtest/gtest.h>
#include "libraryCode.h"

TEST(ToUpperTest, BasicTest)
{
    //Arrange
    char inputString[] = "Hello World";

    //Act
    toUpper(inputString);

    //Assert
    ASSERT_STREQ("HELLO WORLD", inputString);

    // if(0 == strcmp("HELLO WORLD", inputString))
    // {
    //     std::cout << "equal strings" << std::endl;
    // }
    // else
    // {
    //     std::cout << "unequal strings" << std::endl;
    // }
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}