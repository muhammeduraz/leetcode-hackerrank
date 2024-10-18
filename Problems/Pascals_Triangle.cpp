#include "Pascals_Triangle.h"

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> vec;
    vec.reserve(numRows);

    for (int row = 0; row < numRows; row++)
    {
        vec.emplace_back(row + 1);

        vec[row][0] = vec[row][row] = 1;

        for (int col = 1; col < row; col++)
        {
            vec[row][col] = vec[row - 1][col - 1] + vec[row - 1][col];
        }
    }

    return vec;
}