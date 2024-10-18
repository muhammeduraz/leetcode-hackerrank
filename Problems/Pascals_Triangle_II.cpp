#include "Pascals_Triangle_II.h"

vector<int> getRow(int rowIndex)
{
    vector<vector<int>> vec;
    vec.reserve(rowIndex + 1);

    for (int row = 0; row < rowIndex + 1; row++)
    {
        vec.emplace_back(row + 1);
        vec[row][0] = vec[row][row] = 1;

        for (int col = 1; col < row; col++)
        {
            vec[row][col] = vec[row - 1][col - 1] + vec[row - 1][col];
        }
    }

    return vec[rowIndex];
}