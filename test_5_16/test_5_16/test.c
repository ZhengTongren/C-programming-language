#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#define N 30000
//
//void bubble_sort(int* arr,int n)
//{
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[N] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	for (i = 0; i < m; i++)
//		scanf("%d", &arr[n + i]);
//
//	bubble_sort(arr, n + m);
//
//	for (i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100] = { 0 };
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	int cnt1 = 0;
//	int cnt2 = 0;
//	//3 1-2 2-3
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] - arr[i + 1] <= 0)
//			cnt1++;
//		else
//			cnt2++;
//	}
//	if (cnt1 == n - 1 || cnt2 == n - 1)
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//	return 0;
//}