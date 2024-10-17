#include <iostream>

#include "Problems/IsPalindrome.h"

int main()
{
    int input;
    std::cin >> input;

    bool isPal = isPalindrome(input);
    if (isPal)
        std::cout << "true";
    else
        std::cout << "false";

    return 0;
}
