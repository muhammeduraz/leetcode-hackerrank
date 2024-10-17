#include "Longest_Common_Prefix.h"

using namespace std;

int GetMinStrSize(vector<string>& strs)
{
    if (strs.size() == 0) return 0;

    int min = INT_MAX;
    for (int i = 0; i < strs.size(); i++)
    {
        if (strs[i].length() < min)
            min = strs[i].length();
    }

    return min;
}

string longestCommonPrefix(vector<string>& strs)
{
    int minStrSize = GetMinStrSize(strs);

    char currChar;
    string prefix;
    int letterIndex = 0;

    for (int i = 0; i < minStrSize; i++)
    {
        bool same = true;
        currChar = strs[0][letterIndex];

        for (int j = 0; j < strs.size(); j++)
        {
            if (currChar != strs[j][letterIndex])
            {
                same = false;
                return prefix;
            }
        }

        if (same)
            prefix += currChar;

        letterIndex++;
        if (letterIndex >= minStrSize)
            break;
    }

    return prefix;
}