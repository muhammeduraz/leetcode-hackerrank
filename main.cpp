#include <iostream>

#include "Problems/Pow.h"

int main()
{
    while (true)
    {
        double x;
        int n;

        scanf("%lf %d", &x, &n);

        double res = myPow(x, n);
        printf("%lf", res);
    }

    return 0;
}
