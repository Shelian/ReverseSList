#ifndef __REVERSESLIST_H__
#define __REVERSESLIST_H__
#include <iostream>
using namespace std;

struct ListNode
{
	int _data;
	ListNode* _next;

};

void ReverseSList(ListNode*& pHead)
{
	if (pHead == NULL)
		return;

	ListNode* newHead = NULL;
	ListNode* cur = pHead;
	ListNode* tmp = NULL;

	while (cur)
	{
		tmp = cur;
		cur = cur->_next;

		tmp->_next = newHead;
		newHead = tmp;
	}
	pHead = newHead;
}



#endif //__REVERSESLIST_H__