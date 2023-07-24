#include<stdio.h>

////静态顺序表
//#define MaxSize 10
//typedef struct SqList
//{
//	int date[MaxSize];
//	int length;
//}SqList;
////初始化顺序表
//void InitList(SqList* sq)
//{
//	int i = 0;
//	for (i = 0; i < MaxSize; i++)
//	{
//		sq->date[i] = 0;
//	}
//	sq->length = 0;
//}
////插入数据
//void ListInsert(SqList* sq, int i, int e)
//{
//	if (i > 0 && (i <= sq->length + 1) && sq->length < MaxSize)
//	{
//		int j = sq->length;
//		for (; j >= i; j--)
//		{
//			sq->date[j] = sq->date[j - 1];
//		}
//		sq->date[i - 1] = e;
//		sq->length++;
//	}
//	else
//		printf("插入失败\n");
//}
////删除数据
//void ListDelete(SqList* sq, int i, int* e)
//{
//	if (i > 0 && i <= sq->length)
//	{
//		*e = sq->date[i - 1];
//		int j = i - 1;
//		for (; j < sq->length - 1; j++)
//		{
//			sq->date[j] = sq->date[j + 1];
//		}
//		sq->length--;
//	}
//	else
//		printf("插入失败\n");
//}
////按位查找数据
//int GetElem(SqList sq, int i)
//{
//	if (i > 0 && i <= sq.length)
//	{
//		return sq.date[i - 1];
//	}
//	else
//		printf("查找失败\n");
//}
////按值查找
//int LocateElem(SqList sq, int e)
//{
//	int i = 0;
//	for (; i < sq.length; i++)
//	{
//		if (sq.date[i] == e)
//			return i + 1;
//	}
//	printf("没找到%d\n", e);
//}
//int main()
//{
//	SqList sq;
//	InitList(&sq);
//	ListInsert(&sq, 3, 100);//在第三个位置插入数据100
//	int e = 0;
//	ListDelete(&sq, 3, &e);//删除在第三个位置的数据，并把值“带出来”
//	GetElem(sq, 3);//查找第三位置的数据
//	LocateElem(sq, 100);//查找数据100的位置
//	return 0;
//}
 

////动态顺序表
//#include<stdlib.h>
//#define InitSize 10
//typedef struct SeqList
//{
//	int* data;
//	int MaxSize;
//	int length;
//}SeqList;
////初始化
//void InitList(SeqList* sq)
//{
//	sq->data = (int*)malloc(sizeof(int) * InitSize);
//	sq->MaxSize = InitSize;
//	sq->length = 0;
//}
////增加大小
//void IncreaseList(SeqList* sq,int len)
//{
//	int* p = sq->data;
//	sq->data = (int*)malloc(sizeof(int) * (InitSize + len));
//	int i = 0;
//	for (i = 0; i < sq->length; i++)
//	{
//		sq->data[i] = p[i];
//	}
//	sq->MaxSize += len;
//	free(p);
//}
//int main()
//{
//	SeqList sq;
//	InitList(&sq);
//	IncreaseList(&sq, 5);
//	return 0;
//}


//单链表

