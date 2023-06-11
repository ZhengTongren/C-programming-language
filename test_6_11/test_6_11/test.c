#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	/*for (int i = 0; i < n; i++)
//	{
//		if (i + 1 % 3 == 1)
//			arr[i] = 1;
//		else if (i + 1 % 3 == 2)
//			arr[i] = 2;
//		else if (i + 1 % 3 == 0)
//			arr[i] = 3;
//	}*/
//	//11
//	//1 2 3 1 2 3 1 2 3 1 2
//	//3 1 2 3 1 2 3 1
//	//1 2 3 1 2 3
//	//1 2 3 1
//	//1 2 3
//	//1 2 
//	/*int quant = n / 3 + 1;
//	for (int i = 0; i < quant; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[j] != 3)
//			{
//				if (j + 1 % 3 == 1)
//					arr[j] = 1;
//				else if (j + 1 % 3 == 2)
//					arr[j] = 2;
//				else
//					arr[j] = 3;
//			}
//		}
//	}*/
//	//11 / 3 == 3
//	// 8 / 3 == 2
//	// 6 / 3 == 2
//	// 4 / 3 == 1
//	// 3 / 3 == 1
//	// 2 / 3 == 0
//	// 
//
//	//11 * 3 == 33
//	//1 2 3 1 2 3 1 2 3 1 2
//	//3 1   2 3   1 2   3 1
//	//  2   3     1 2     3
//	//  1         2 3   
//	//  1         2
//	//  3
//
//
//	int count = 0;
//	int n1 = n;
//	int count3 = 1;
//	while (count3)
//	{
//		count3 = n1 / 3;
//		n1 -= count3;
//		count++;
//	}
//
//
//	int tmp = 1;
//	for (int i = 0; i < count; i++)
//	{
//		int count2 = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[j] != 3)
//			{
//				arr[j] = tmp;
//				tmp++;
//				if (tmp > 3)
//					tmp = 1;
//
//
//			}
//			else
//				count2++;
//			if (count2 == n - 1)
//				break;
//		}
//	}
//	//1 2 3 1 2 3 1 2 3 1 2 3 1 2 3 1 2 3
//	//1 2   3 1   2 3   1 2   3 1   2 3
//	//1 2     3   1     2 3     1   2 
//	//3 1         2     3       1   2
//	//  3         1             2   3
//	//            1             2
//	//            3
//
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] != 3)
//		{
//			printf("%d\n", i + 1);
//			break;
//		}
//	}
//
//	return 0;
//}


