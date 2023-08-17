#include"queue.h"


void test1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	/*while (!EmptyQueue(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}*/
	printf("%d ", QueueFront(&q));
	QueuePop(&q);

	QueuePush(&q, 5);
	QueuePush(&q, 6);
	while (!EmptyQueue(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}

	printf("\n%d", QueueSize(&q));
	QueueBack(&q);
	
	//QueuePop(&q);

	QueueDestroy(&q);
}
int main()
{
	test1();
	return 0;
}
