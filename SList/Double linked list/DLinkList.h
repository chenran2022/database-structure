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
//在结点pos前插入一个节点，pos可以是查找得到的节点
void ListInsert(DLinkList* pos, DataListType x);
void ListErase(DLinkList* pos);

void ListDestroy(DLinkList* plist);