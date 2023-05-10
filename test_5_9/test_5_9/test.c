#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	int A[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int B[10] = { 0,9,8,7,6,5,4,3,2,1 };
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",A[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//void init(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		arr[i] = 0;
//}
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	init(arr, sz);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		scanf("%d", &arr[i]);
//
//	print(arr, sz);
//
//	reverse(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}


//#include<stdio.h>
//
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2,4,5,6,1,3,7,9,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


