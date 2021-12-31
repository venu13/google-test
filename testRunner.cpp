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
    ASSERT_STRCASEEQ("Hello WORLD", inputString);

    std::string convertedStr(inputString);
    ASSERT_EQ("HELLO WORLD", convertedStr);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}