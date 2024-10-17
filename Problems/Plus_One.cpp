#include "Plus_One.h"

vector<int> plusOne(vector<int>& digits)
{
    int hand = 0;
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        int res = digits[i] + 1;
        hand = res / 10;
        res %= 10;

        digits[i] = res;

        if (hand == 0)
            break;
    }

    if (hand != 0)
        digits.insert(digits.begin(), hand);

    return digits;
}