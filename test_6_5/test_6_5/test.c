#define _CRT_SECURE_NO_WARNINGS 1




//struct S
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//
//struct B
//{
//	int a;
//	struct S s;
//	int* p;
//};
//
//int main()
//{
//	return 0;
//}


#include<stdio.h>
//
//int main()
//{
//	double x = 0, y = 0;
//	scanf("%lf", &x);
//	if (x <= 15)
//		y = 4 * x / 3;
//	else
//		y = 2.5 * x - 17.5;
//	printf("%.2f\n", y);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	char ch = 0;
//	scanf("%d %c %d", &a, &ch, &b);
//	if (ch == '+')
//		printf("%d\n", a + b);
//	else if (ch == '-')
//		printf("%d\n", a - b);
//	else if (ch == '*')
//		printf("%d\n", a * b);
//	else if (ch == '/')
//		printf("%d\n", a / b);
//	else if (ch == '%')
//		printf("%d\n", a % b);
//	else
//		printf("ERROR\n");
//	return 0;
//}


//int main()
//{
//	float o, c, h, l;
//	scanf("%f %f %f %f", &o, &h, &l, &c);
//	if (o == c)
//	{
//		printf("R-Cross ");
//	}
//	else if (o > c)
//	{
//		printf("BW-Solid ");
//	}
//	else
//		printf("R-Hollow ");
//	if (l < o && l < c && h > o && h > c)
//	{
//		printf("with Lower Shadow and Upper Shadow");
//	}
//	else if (l < o && l < c)
//	{
//		printf("with Lower Shadow");
//	}
//	else if (h > o && h > c)
//	{
//		printf("with Lower Upper Shadow");
//	}
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = 0;
//	int count = 0;
//	for (int i = a; i <= b; i++)
//	{
//		printf("%5d", i);
//		count++;
//		if (count == 5)
//		{
//			count = 0;
//			printf("\n");
//		}
//		sum += i;
//	}
//	printf("\nSum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	float f = 0.0f;
//	scanf("%f", &f);
//
//	double pai = 1;
//	double tmp = 0;
//	for (int i = 1; i; i++)
//	{
//		double nj = 1.0;
//		for (int j = 1; j <= i; j++)
//			nj *= j;
//
//		double n2 = 1.0;
//		for (long long j = 1; j <= i; j++)
//			n2 *= (2 * j + 1);
//
//		tmp = nj / n2;
//		pai += tmp;
//
//		if (tmp < f)
//			break;
//	}
//	printf("%.6f\n", 2 * pai);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//
//	for (int i = n; i < n + 4; i++)
//	{
//		int num = 0;
//
//		for (int j = n; j < n + 4 && j != i; j++)
//		{
//			for (int k = n; k < n + 4 && k != i && k != j; k++)
//			{
//				num = i * 100 + j * 10 + k;
//				printf("%d", num);
//				count++;
//				if (count < 6)
//					printf(" ");
//				else
//				{
//					count = 0;
//					printf("\n");
//				}
//			}
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	for (int i = n; i < n + 4; i++)
//	{
//		int num = 0;
//		for (int j = n; j < n + 4; j++)
//		{
//			if (j == i)
//				j++;
//			if (j < n + 4 && j != i)
//			{
//				for (int k = n; k < n + 4; k++)
//				{
//					if (k == i)
//						k++;
//					if (k == j)
//						k++;
//					if (k < n + 4 && k != i && k != j)
//					{
//						num = i * 100 + j * 10 + k;
//						printf("%d", num);
//						count++;
//						if (count < 6)
//							printf(" ");
//						else
//						{
//							count = 0;
//							printf("\n");
//							break;
//						}
//					}
//				}
//			}
//			
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//
//	for (int i = n; i < n + 4; i++)
//	{
//		int num = 0;
//
//		for (int j = n; j < n + 4; j++)
//		{
//			if (j == i)
//				continue;
//			if (j < n + 4)
//			{
//				for (int k = n; k < n + 4; k++)
//				{
//					if (k == i || k == j)
//						continue;
//
//					if (k < n + 4)
//					{
//						num = i * 100 + j * 10 + k;
//						printf("%d", num);
//						count++;
//						if (count < 6)
//							printf(" ");
//						else
//						{
//							count = 0;
//							printf("\n");
//							break;
//						}
//					}
//
//				}
//			}
//
//		}
//	}
//	return 0;
//}


