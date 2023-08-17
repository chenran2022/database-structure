#include"queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
}

void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
}

void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* tmp = (QNode*)malloc(sizeof(QNode));
	if (tmp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	else
	{
		tmp->data = x;
		tmp->next = NULL;
	}
	if (pq->head == NULL)
	{
		pq->head = tmp;
		pq->tail = tmp;
	}
	else
	{
		pq->tail->next = tmp;
		pq->tail = tmp;
	}
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!EmptyQueue(pq));
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* tmp = pq->head->next;
		free(pq->head);
		pq->head = tmp;
	}
}

bool EmptyQueue(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}

QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!EmptyQueue(pq));
	return pq->head->data;
}

QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!EmptyQueue(pq));
	return pq->tail->data;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	int sz = 0;
	QNode* cur = pq->head;
	while (cur)
	{
		sz++;
		cur = cur->next;
	}
	return sz;
}