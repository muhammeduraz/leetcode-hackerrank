#include "First_Missing_Positive.h"

int firstMissingPositive(vector<int>& nums)
{
	int totalNum = nums.size();

	for (int i = 0; i < totalNum; i++)
	{
		while (nums[i] > 0 && nums[i] <= totalNum && nums[nums[i] - 1] != nums[i]) 
		{
			std::swap(nums[i], nums[nums[i] - 1]);
		}
	}

	for (int i = 0; i < totalNum; i++)
	{
		if (nums[i] != i + 1)
			return i + 1;
	}

	return totalNum + 1;
}