#include <cmath>
#include "IsPalindrome.h"

int GetDigitCount(int x)
{
    int count = 0;
    while(x != 0)
    {
        x = x / 10;
        count++;
    }

    return count;
}

bool isPalindrome(int x)
{
    if (x < 0) return false;
    if (x < 10) return true;

    int numberOfDigits = GetDigitCount(x);
    int curDigit = numberOfDigits - 1;

    for (int i = 0; i < numberOfDigits / 2; i++)
    {
        int start = x / pow(10, curDigit);
        start = start % 10;

        int end = x % (int)pow(10, i + 1);
        end = end / (int)pow(10, i);

        if (start != end)
            return false;

        curDigit--;
    }

    return true;
};