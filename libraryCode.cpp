#include "libraryCode.h"

#include <algorithm>

bool isPositive(int x)
{
    return x >= 0;
}

int countPositive(std::vector<int> const& inputVector)
{
    return std::count_if(inputVector.begin(), inputVector.end(), isPositive);
}