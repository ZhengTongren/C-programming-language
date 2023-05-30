#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//int IsTheNumber(const int n)
//{
//	int n1 = sqrt(n);
//	if (n1 * n1 != n)
//		return 0;
//	int count = 0;
//	int arr[10] = { 0 };
//	for (int tmp = n,i=0; tmp; tmp/=10,i++)
//	{
//		arr[i] = tmp % 10;
//		count++;
//	}
//	int flag = 0;
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = i + 1; j < count; j++)
//		{
//			if (arr[j] == arr[i])
//			{
//				flag = 1;
//				break;
//			}
//		}
//	}
//	return flag;
//}
//
//int main()
//{
//	/*int N = 0;
//	scanf("%d", &N);
//	int ret = IsTheNumber(N);
//	if (ret == 1)
//		printf("YES\n");*/
//	int n1 = 0, n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int count = 0;
//	for (int i = n1; i <= n2; i++)
//	{
//		int ret = IsTheNumber(i);
//		if (ret == 1)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


