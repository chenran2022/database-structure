#include"Stack.h"


void StackInit(ST* ps)
{
	assert(ps);
	ps->data = NULL;
	ps->top = 0;//栈顶数据的上一个，如果是-1，则表示栈顶数据
	ps->capacity = 0;
}

void StackDestroy(ST* ps)
{
	assert(ps);
	ps->top = ps->capacity = 0;
	free(ps->data);
	ps->data = NULL;
}

void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top==ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		STDataType* tmp = (STDataType*)realloc(ps->data, sizeof(STDataType) * newcapacity);
		if (tmp != NULL)
		{
			ps->data = tmp;
			ps->capacity = newcapacity;
		}
		else
		{
			printf("realloc fail");
			exit(-1);
		}
	}
	ps->data[ps->top] = x;
	ps->top++;
	

}

bool StackEmpty(ST* ps)
{
	assert(ps);
	/*if (ps->top == 0)
	{

		return true;

	}
	return false;*/
	return ps->top == 0;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top--;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	return ps->data[ps->top - 1];
}

int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}