#include<stdio.h>

////��̬˳���
//#define MaxSize 10
//typedef struct SqList
//{
//	int date[MaxSize];
//	int length;
//}SqList;
////��ʼ��˳���
//void InitList(SqList* sq)
//{
//	int i = 0;
//	for (i = 0; i < MaxSize; i++)
//	{
//		sq->date[i] = 0;
//	}
//	sq->length = 0;
//}
////��������
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
//		printf("����ʧ��\n");
//}
////ɾ������
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
//		printf("����ʧ��\n");
//}
////��λ��������
//int GetElem(SqList sq, int i)
//{
//	if (i > 0 && i <= sq.length)
//	{
//		return sq.date[i - 1];
//	}
//	else
//		printf("����ʧ��\n");
//}
////��ֵ����
//int LocateElem(SqList sq, int e)
//{
//	int i = 0;
//	for (; i < sq.length; i++)
//	{
//		if (sq.date[i] == e)
//			return i + 1;
//	}
//	printf("û�ҵ�%d\n", e);
//}
//int main()
//{
//	SqList sq;
//	InitList(&sq);
//	ListInsert(&sq, 3, 100);//�ڵ�����λ�ò�������100
//	int e = 0;
//	ListDelete(&sq, 3, &e);//ɾ���ڵ�����λ�õ����ݣ�����ֵ����������
//	GetElem(sq, 3);//���ҵ���λ�õ�����
//	LocateElem(sq, 100);//��������100��λ��
//	return 0;
//}
 

////��̬˳���
//#include<stdlib.h>
//#define InitSize 10
//typedef struct SeqList
//{
//	int* data;
//	int MaxSize;
//	int length;
//}SeqList;
////��ʼ��
//void InitList(SeqList* sq)
//{
//	sq->data = (int*)malloc(sizeof(int) * InitSize);
//	sq->MaxSize = InitSize;
//	sq->length = 0;
//}
////���Ӵ�С
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


//������

