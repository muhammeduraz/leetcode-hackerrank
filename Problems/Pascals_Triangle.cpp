#include "Pascals_Triangle.h"

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> vec(numRows);

    for (int n = 0; n < numRows; n++)
    {
        vector<int> v(n + 1);

        for (int l = 0; l < n + 1; l++)
        {
            int val;

            if (l == 0 || l == n)
                val = 1;
            else
            {
                val = vec[n - 1][l - 1] + vec[n - 1][l];
            }

            v[l] = val;
        }

        vec[n] = v;
    }

    return vec;
}