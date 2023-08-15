#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DataListType;

typedef struct DLinkList
{
	DataListType data;
	struct DLinkList* prev;
	struct DLinkList* next;
}DLinkList;

DLinkList* InitLinkList();
void PushBack(DLinkList* plist, DataListType x);
void DLinkListPrint(DLinkList* plist);
void PopBack(DLinkList* plist);
void PushFront(DLinkList* plist,DataListType x);
void PopFront(DLinkList* plist);

DLinkList* ListFind(DLinkList* plist, DataListType x);
//�ڽ��posǰ����һ���ڵ㣬pos�����ǲ��ҵõ��Ľڵ�
void ListInsert(DLinkList* pos, DataListType x);
void ListErase(DLinkList* pos);

void ListDestroy(DLinkList* plist);