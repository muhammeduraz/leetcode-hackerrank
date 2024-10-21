#include <iostream>

#include "Problems/First_Missing_Positive.h"

int main()
{
    vector<int> v{ -1,4,2,1,9,10 };
    int res = firstMissingPositive(v);

    std::cout << res << endl;

    return 0;
}
