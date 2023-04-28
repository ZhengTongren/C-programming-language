#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[30];
//	char arr3[30];
//
//	strcpy(arr2, arr1);
//	strcpy(arr3, "successful");
//	printf("arr1:%s\narr2:%s\narr3:%s\n", arr1, arr2, arr3);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "I know I will be the top";
//	memset(arr1, '*', 7);
//	//puts(arr1);
//	printf("%s\n", arr1);
//	return 0;
//}


//int get_max(int a,int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	Swap(&a, &b);
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}


//写一个函数可以判断一个数是不是素数
#include<math.h>

//int jud(int n)
//{
//	int ret = 1;
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = jud(n);
//	
//	if (ret == 1)
//		printf("%d是素数\n", n);
//	else
//		printf("%d不是素数\n", n);
//
//	return 0;
//}


//写一个函数判断一年是不是闰年

//int jud(int y)
//{
//	int ret = 0;
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		ret = 1;
//	return ret;
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		int ret = jud(y);
//		if (ret == 1)
//			printf("%d ", y);
//	}
//
//	return 0;
//}


//写一个函数，实现一个整形有序数组的二分查找

//int binary_search(int arr[],int sz, int n)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d", sz);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == n)
//			return 1;
//		else if (arr[mid] > n)
//			right = mid - 1;
//		else if (arr[mid] < n)
//			left = mid + 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = binary_search(arr, sz, n);
//	if (ret == 1)
//		printf("找到了\n");
//	else
//		printf("没找到\n");
//
//	return 0;
//}
