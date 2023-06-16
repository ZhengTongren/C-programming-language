#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void Sum(int* a1, int* b1, int a2, int b2)
//{
//	*a1 = *a1 * b2 + *b1 * a2;
//	*b1 = *b1 * b2;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a1 = 1;
//	int b1 = 1;
//	int a2 = 0;
//	int b2 = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d/%d", &a2, &b2);
//		Sum(&a1, &b1, a2, b2);
//	}
//	a1 -= b1;
//
//	int tmp1 = a1 > b1 ? a1 : b1;
//	int tmp2 = a1 + b1 - tmp1;
//	int tmp = tmp1 % tmp2;
//	while (tmp)
//	{
//		tmp1 = tmp2;
//		tmp2 = tmp;
//		tmp = tmp1 % tmp2;
//	}
//
//	a1 /= tmp2;
//	b1 /= tmp2;
//	if (b1 < 0)
//		a1 = -a1;
//	if (b1 == 1)
//		printf("%d\n", a1);
//	else
//		printf("%d/%d\n", a1, b1);
//	return 0;
//}


//void Sum(int* x, int* y, int x1, int y1)
//{
//	*x = *x * y1 + x1 * (*y);
//	*y *= y1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 1;
//	int b = 1;
//	int a1 = 0;
//	int b1 = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d/%d", &a1, &b1);
//		Sum(&a, &b, a1, b1);
//	}
//	a -= b;
//	b *= n;
//	int tmp1 = a > b ? a : b;
//	int tmp2 = a + b - tmp1;
//	int tmp = tmp1 % tmp2;
//	while (tmp)
//	{
//		tmp1 = tmp2;
//		tmp2 = tmp;
//		tmp = tmp1 % tmp2;
//	}
//
//	if (b < 0)
//	{
//		b = -b;
//		a = -a;
//	}
//	a /= tmp2;
//	b /= tmp2;
//	if (1 == b)
//		printf("%d\n", a);
//	else
//		printf("%d/%d\n", a, b);
//
//	return 0;
//}


