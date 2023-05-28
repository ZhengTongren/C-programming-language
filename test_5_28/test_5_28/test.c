#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//#define MAX 10
//
//double f(int n, double arr[], double x)
//{
//	double sum = 0;
//	for (int i = 0; i <= n; i++)
//	{
//		if (0 == i)
//			sum += arr[i];
//		else
//		{
//			double xi = 1;
//			for (int j = 1; j <= i; j++)
//				xi *= x;
//			sum += arr[i] * xi;
//		}
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	double x = 0.0;
//	scanf("%d %lf",&n, &x);
//	double arr[MAX] = { 0.0 };
//	for (int i = 0; i <= n; i++)
//		scanf("%lf", &arr[i]);
//	double y = f(n, arr, x);
//	printf("%.1f\n", y);
//	return 0;
//}


//#define MAX 10
//
//int Sum(int List[], int n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//		sum += List[i];
//	return sum;
//}
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int List[MAX] = { 0 };
//	for(int i = 0; i < N; i++)
//		scanf("%d", &List[i]);
//	int s = Sum(List, N);
//	printf("%d\n", s);
//	return 0;
//}


//typedef float ElementType;
//
//ElementType Ave(ElementType arr[], int n)
//{
//	ElementType a = 0.0f;
//	for (int i = 0; i < n; i++)
//		a += arr[i];
//	return a / n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	ElementType arr[10] = { 0.0f };
//	for (int i = 0; i < n; i++)
//		scanf("%f", &arr[i]);
//	ElementType ave = Ave(arr, n);
//	printf("%.2f", ave);
//	return 0;
//}


