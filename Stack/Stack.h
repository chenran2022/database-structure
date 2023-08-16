#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* data;
	int top;
	int capacity;
}ST;


void StackInit(ST* ps);
void StackDestroy(ST* ps);
bool StackEmpty(ST* ps);
void StackPush(ST* ps, STDataType x);
void StackPop(ST* ps);
STDataType StackTop(ST* ps);//ȡ��ջ��������
int StackSize(ST* ps);//ջ�Ĵ�С