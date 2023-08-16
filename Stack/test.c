#include"Stack.h"

void test1()
{
	ST ps;
	StackInit(&ps);
	StackPush(&ps, 1);
	StackPush(&ps, 2);
	StackPush(&ps, 3);
	StackPush(&ps, 4);

	StackPop(&ps);
	StackPop(&ps);
	StackPop(&ps);
	StackPop(&ps);

	printf("%d", StackTop(&ps));

	StackDestroy(&ps);
}

void test2()
{
	ST ps;
	StackInit(&ps);
	StackPush(&ps, 1);
	StackPush(&ps, 2);
	StackPush(&ps, 3);
	StackPush(&ps, 4);

	StackPop(&ps);
	StackPop(&ps);
	StackPush(&ps, 5);
	StackPush(&ps, 6);

	//±È¿˙’ª
	while (!StackEmpty(&ps))
	{
		printf("%d  ", StackTop(&ps));
		StackPop(&ps);
	}

	StackDestroy(&ps);
}
int main()
{
	//test1();
	test2();
	return 0;
}