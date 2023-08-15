#include"DLinkList.h"


void test1()
{
	DLinkList* plist = InitLinkList();
	PushBack(plist, 1);
	PushBack(plist, 5);
	PushBack(plist, 2);
	PushBack(plist, 3);
	DLinkListPrint(plist);
	PopBack(plist);
	PopBack(plist);
	PopBack(plist);
	/*PopBack(plist);
	PopBack(plist);*/
	DLinkListPrint(plist);
	PushFront(plist, 10);
	PushFront(plist, 9);
	DLinkListPrint(plist);
	PopFront(plist);
	PopFront(plist);
	/*PopFront(plist);
	PopFront(plist);*/
	DLinkListPrint(plist);

}
void test2()
{
	DLinkList* plist = InitLinkList();
	PushBack(plist, 1);
	PushBack(plist, 5);
	PushBack(plist, 2);
	PushBack(plist, 3);
	DLinkListPrint(plist);
	DLinkList* pos = ListFind(plist, 2);
	ListInsert(pos, 10);
	ListInsert(pos, 20);
	ListInsert(plist->next, 200);//相当于头插
	ListInsert(plist, 100);//相当于尾插
	DLinkListPrint(plist);
	ListErase(pos);
	DLinkListPrint(plist);

	ListDestroy(plist);
	plist = NULL;
}
int main()
{
	//test1();
	test2();
	return 0;
}