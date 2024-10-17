#include "Search_Insert_Point.h"

int searchInsert(vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return left;
}

int searchInsertSlowAlternative(vector<int>& nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= target)
        {
            return i;
        }
    }

    return  nums.size();
}