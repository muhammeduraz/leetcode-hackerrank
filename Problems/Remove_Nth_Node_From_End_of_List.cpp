#include "Remove_Nth_Node_From_End_of_List.h"

ListNode* removeNthFromEnd(ListNode* head, int n)
{
	if (n == 1 && head->next == nullptr) return nullptr;

	ListNode* end = head;
	ListNode* nEnd = head;

	int delay = 0;
	while (end)
	{
		delay++;
		end = end->next;

		if (delay <= n + 1) continue;
		nEnd = nEnd->next;
	}

	if (delay == n) return head->next;

	if (nEnd->next != nullptr && nEnd->next->next == nullptr)
		nEnd->next = nullptr;
	else if (nEnd->next != nullptr)
		nEnd->next = nEnd->next->next;
	return head;
}

ListNode* removeNthFromEnd2(ListNode* head, int n)
{
	ListNode* end = head;

	for (int i = 0; i < n; i++)
		end = end->next;

	if (end == nullptr)
		return head->next;

	ListNode* nEnd = head;
	while (end->next)
	{
		end = end->next;
		nEnd = nEnd->next;
	}

	nEnd->next = nEnd->next->next;
	nEnd = nullptr;
	return head;
}