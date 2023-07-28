#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int SLTData;

typedef struct SListNode
{
	SLTData data;
	struct SListNode* next;
}SLTNode;

void SLTPrint(SLTNode* phead);
void SListPushBack(SLTNode** pphead, SLTData x);