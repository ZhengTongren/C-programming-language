#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main() 
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int j=0,sum = 0;
//		for (j = 10;  j <= 10000; j *= 10)
//		{
//			sum += (i / j) * (i % j);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 10000;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int j = 10,sum=0;
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += (i / j) * (i % j);
//		}
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		//A 65
//		//敲下的回车 也是一个字符
//		//a 97
//		getchar();
//		printf("%c\n", ch + 32);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[7] = { 0 };
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	float ave = (sum - max - min) / 5.0;
//	printf("%.2f\n", ave);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int sum = 0;
//	int max = 0;
//	int min = 100;
//	int count = 0;
//
//	while (scanf("%d", &a) != EOF)
//	{
//		sum += a;
//		count++;
//		if (a > max)
//			max = a;
//		if (a < min)
//			min = a;
//		if (count == 7)
//		{
//			float ave = (sum - max - min) / 5.0;
//			printf("%.2f\n", ave);
//			sum = 0;
//			max = 0;
//			min = 100;
//			count = 0;
//		}
//	}
//	
//	return 0;
//}

//
//int jud_order(int arr[], int n)
//{
//	int tmp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if(arr[i])
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int tmp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int ret = jud_order(arr, n);
//
//	return 0;
//}