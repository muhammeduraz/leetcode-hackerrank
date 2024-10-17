#include "Length_of_Last_Word.h"

int lengthOfLastWord(string s)
{
    bool space = false;
    int length = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            space = true;
        }
        else
        {
            if (space)
            {
                length = 0;
                space = false;
            }

            length++;
        }
    }

    return length;
}