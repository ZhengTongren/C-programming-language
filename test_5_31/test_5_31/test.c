#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int Factorial(const int N)
//{
//	if (N)
//	{
//		int ret = 1;
//		for (int i = 1; i <= N; i++)
//			ret *= i;
//		return ret;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int s = Factorial(n);
//	if (s)
//		printf("%d! = %d\n", n, s);
//	else
//		printf("Invalid input\n");
//	return 0;
//}


//int Count_Digit(const int N, const int D)
//{
//	int n = N;
//	if (n < 0)
//		n *= -1;
//	int count = 0;
//	while (n)
//	{
//		int tmp = n % 10;
//		if (tmp == D)
//			count++;
//		n /= 10;
//	}
//	return count;
//}
//
//int main()
//{
//	int N = 0;
//	int D = 0;
//	scanf("%d %d", &N, &D);
//	int ret = Count_Digit(N, D);
//	printf("%d\n", ret);
//	return 0;
//}


//void Print_Factorial(const int N)
//{
//	if (N > 0)
//	{
//		long long s = 1;
//		for (long long i = 1; i <= N; i++)
//			s *= i;
//		printf("%lld\n", s);
//	}
//	else
//		printf("Invalid input\n");
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print_Factorial(n);
//
//	return 0;
//}


//typedef float ElementType;
//
//void bubble_sort(ElementType arr[], int N)
//{
//	for (int i = 0; i < N - 1; i++)
//	{
//		for (int j = 0; j < N - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				ElementType tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//ElementType Median(ElementType A[], int N)
//{
//	bubble_sort(A, N);
//	int n = (N + 1) / 2;
//	
//	return A[n-1];
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	ElementType A[10] = { 0 };
//	for (int i = 0; i < n; i++)
//		scanf("%f", &A[i]);
//
//	ElementType f = Median(A, n);
//	printf("%.2f\n", f);
//	return 0;
//}


//int even(int n)
//{
//	if (n % 2)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (even(n))
//		printf("%d is even.\n", n);
//	else
//		printf("%d is odd.\n", n);
//	return 0;
//}

//void Search_Bin(int arr[], int n, int k)
//{
//	int left = 0;
//	int right = n - 1;
//
//	int flag = 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		if (arr[mid] == k)
//		{
//			printf("找到了，下标是%d\n", mid);
//			flag = 0;
//			break;
//		}
//	}
//	if (1 == flag)
//		printf("没找到\n");
//}
//
//int main()
//{
//	int n = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	int k = 0;
//	scanf("%d", &k);
//	Search_Bin(arr, n, k);
//
//
//	return 0;
//}


