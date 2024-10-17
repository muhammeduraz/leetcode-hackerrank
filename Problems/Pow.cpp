#include "Pow.h"
#include <math.h>

double myPow(double x, int n)
{
    if (n == 0) return 1.0;

    double res = 1.0;

    int abs_n = abs(n);
    if (n < 0)
        x = 1 / x;

    while(abs_n > 0)
    {
        if (abs_n % 2 == 1)
        {
            res *= x;
        }
        
        x *= x;
        abs_n /= 2;
    }

    return res;
}