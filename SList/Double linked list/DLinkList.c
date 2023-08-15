#include"DLinkList.h"

DLinkList* InitLinkList()
{
	DLinkList* plist = (DLinkList*)malloc(sizeof(DLinkList));
	if (plist)
	{
		plist->prev = plist;
		plist->next = plist;
		return plist;
	}
	else
	{
		exit(0);
		return NULL;
	}
}

void PushBack(DLinkList* plist, DataListType x)
{
	/*DLinkList* tail = plist;
	while (tail->next != plist)
	{
		tail = tail->next;
	}*/
	DLinkList* tail = plist->prev;
	DLinkList* newcode = (DLinkList*)malloc(sizeof(DLinkList));
	if (newcode)
	{
		newcode->data = x;
		tail->next = newcode;
		newcode->next = plist;
		newcode->prev = tail;
		plist->prev = newcode;
	}
}

void DLinkListPrint(DLinkList* plist)
{
	DLinkList* cur = plist->next;
	while (cur != plist)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void PopBack(DLinkList* plist)
{
	if (plist->next != plist)
	{
		DLinkList* tail = plist->prev;
		DLinkList* pre = plist->prev->prev;
		free(tail);
		tail = NULL;
		pre->next = plist;
		plist->prev = pre;
	}
	else
		printf("无数据，删除失败\n");
}

void PushFront(DLinkList* plist, DataListType x)
{
	assert(plist);

	DLinkList* phead = (DLinkList*)malloc(sizeof(DLinkList));
	assert(phead);
	phead->data = x;

	DLinkList* pheadnext = plist->next;
	pheadnext->prev = phead;
	plist->next = phead;
	phead->prev = plist;
	phead->next = pheadnext;
}

void PopFront(DLinkList* plist)
{
	assert(plist);
	assert(plist->next != plist);
	DLinkList* phead = plist->next;
	plist->next = phead->next;
	phead->next->prev = plist;
	free(phead);
}

DLinkList* ListFind(DLinkList* plist, DataListType x)
{
	assert(plist);
	assert(plist->next != plist);

	DLinkList* cur = plist->next;
	while (cur != plist)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return  NULL;
}

void ListInsert(DLinkList* pos, DataListType x)
{
	DLinkList* posPrev = pos->prev;
	DLinkList* newcode = (DLinkList*)malloc(sizeof(DLinkList));
	assert(newcode);
	newcode->data = x;
	posPrev->next = newcode;
	newcode->prev = posPrev;
	newcode->next = pos;
	pos->prev = newcode;
}

void ListErase(DLinkList* pos)
{
	DLinkList* posPrev = pos->prev;
	DLinkList* posNext = pos->next;
	free(pos);
	posPrev->next = posNext;
	posNext->prev = posPrev;
}

void ListDestroy(DLinkList* plist)
{
	assert(plist);
	DLinkList* cur = plist->next;	
	while (cur != plist)
	{
		DLinkList* next = cur->next;
		free(cur);
		cur = next;
	}
	free(plist);
	plist = NULL;//但并不会置空本身,外面要自己置空一下
}
