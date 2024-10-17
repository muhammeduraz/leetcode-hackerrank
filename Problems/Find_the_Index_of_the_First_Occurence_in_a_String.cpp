#include "Find_the_Index_of_the_First_Occurence_in_a_String.h"

int strStr(string haystack, string needle)
{
    int res = -1;
    if (needle.length() > haystack.length()) return res;

    for (int i = 0; i < haystack.length(); i++)
    {
        if (haystack.substr(i, needle.length()) == needle)
            return i;
    }

    return res;
}