#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void fun(int n, int* y, int* f)
//{
//	int flag = 1;
//	for (int f1 = n / 10 + 1; f1 < 100; f1++)
//	{
//		for (int y1 = 0; y1 < f1; y1++)
//		{
//			if (f1 * 10 + y1 == 20 * y1 + 2 * f1 + n)
//			{
//				*y = y1;
//				*f = f1;
//				flag = 0;
//				break;
//			}
//		}
//		if (0 == flag)
//			break;
//	}
//
//}
//
//int main()
//{
//	int y = 0;
//	int f = 0;
//	int n = 0;
//	scanf("%d", &n);
//
//	fun(n, &y, &f);
//	printf("%d.%d\n", y, f);
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	int f = 0;
//	int n = 0;
//	scanf("%d", &n);
//
//	//f * 10 + y == n + 20 * y + 2 * f
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
// }


//int main()
//{
//	int x = 0;
//	int y = 0;
//	int n = 0;
//	scanf("%d", &n);
//
//	int flag = 0;
//	for (int x = 0; x <= 100; x++)
//	{
//		for (int y = x; y <= 100; y++)
//		{
//			if (x * x + y * y == n)
//			{
//				printf("%d %d\n", x, y);
//				flag = 1;
//			}
//		}
//	}
//	if (0 == flag)
//		printf("No Solution\n");
//	return 0;
//}


//int main()
//{
//	//����ʱ��
//	int t = 0;
//	scanf("%d", &t);
//	//�ڹ�·��
//	int s1 = 0;
//	//����·��
//	int s2 = 0;
//
//	//����һ��ʼ�ڹ��ܵı�����Զ������ǰ��ʮ����
//	int flag = 1;
//
//	//���ڿ���������Ϣ30min
//	int t1 = 0;
//
//	//i �� i ��ʮ����
//	for (int i = 0; i < t / 10 + 1; i++)
//	{
//		//j ���ڿ���ÿһ��(10 min) �о���ʱ�� �� j ����
//		//i * 10 + j <= t ȷ������������ʱ��
//		for (int j = 1; j <= 10 && i * 10 + j <= t; j++)
//		{
//			s1 += 3 * j;
//
//			
//			if (flag == 1)
//			{
//				s2 += 10 * j;
//			}
//		}
//
//		if (s2 > s1)
//		{
//			flag = 0;
//
//			//���������� ��i�ֽ�����ʼ��Ϣ
//			t1 = i;
//		}
//		//��Ϣ��ʮ���� ���ӿ�ʼ��
//		if (i - t1 == 3)
//		{
//			flag = 1;
//		}
//	}
//
//	if (s1 > s2)
//		printf("@_@ %d\n", s2);
//	else if (s1 < s2)
//		printf("^_^ %d\n", s1);
//	else
//		printf("-_- %d\n", s1);
//	return 0;
//}


