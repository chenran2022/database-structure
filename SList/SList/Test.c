#include"SList.h"



void SLTest1()
{
	SLTNode* plist=NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);

	SLTPrint(plist);

}
int main()
{
	SLTest1();
	return 0;
}