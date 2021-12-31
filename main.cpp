#include<iostream>
#include "libraryCode.h"
#include <vector>

int main(int argc, char** argv)
{
    std::cout << "Actual application code " << std::endl;
    std::vector<int> x = {1,2,3, -1};

    std::cout << "Count positive out : " << countPositive(x) << std::endl;
    return 0;
}