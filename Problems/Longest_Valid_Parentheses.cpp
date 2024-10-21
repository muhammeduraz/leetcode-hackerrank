#include <stack>
#include "Longest_Valid_Parentheses.h"

int longestValidParentheses(string s)
{
	int highest = 0;

	stack<int> stack;
	stack.push(-1);

	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '(')
		{
			stack.push(i);
		}
		else
		{
			stack.pop();

			if (stack.empty())
			{
				stack.push(i);
			}
			else
			{
				highest = max(highest, i - stack.top());
			}
		}
	}

	return highest;
}