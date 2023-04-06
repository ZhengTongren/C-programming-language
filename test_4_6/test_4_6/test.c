#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	printf("I will learn C++ well!\n");
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("%d\n", (a + b - c) * d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 }, i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	for (i = 9; i >= 0; i--)
//		printf("%d ", arr[i]);
//	return 0;
//}

//int main()
//{
//	int i, arr[10] = { 0 };
//	int count1 = 0, count2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > 0)
//			count1++;
//		else if (arr[i] < 0)
//			count2++;
//	}
//	printf("positive:%d\nnegative:%d\n", count1, count2);
//	return 0;
//}

//int main()
//{
//	int N, arr[200] = { 0 };
//	scanf("%d", &N);
//	int i = 0,total=0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//		total += arr[i];
//	}
//	printf("%d\n", total);
//	return 0;
//}

//int main()
//{
//	int n, arr[100] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	int max = arr[0], min = arr[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("%d\n", max - min);
//	return 0;
//}

//int main()
//{
//	int n, arr[200] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	int a = 0;
//
//	if (arr[0] < arr[1])
//	{
//		for (int i = 1; i < n; i++)
//		{
//			if (arr[i] <= arr[i + 1])
//				a = 1;
//			else
//			{
//				a = 2;
//				break;
//			}
//		}
//		if (a = 1)
//			printf("sorted\n");
//		else
//			printf("unsorted\n");
//	}
//	else if (arr[0] > arr[1])
//	{
//		for (int i = 1; i < n; i++)
//		{
//			if (arr[i] >= arr[i + 1])
//				a = 1;
//			else
//			{
//				a = 2;
//				break;
//			}
//		}
//		if (a = 1)
//			printf("sorted\n");
//		else
//			printf("unsorted\n");
//	}
//	else
//	{
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int n, cnt1 = 0, cnt2 = 0, arr[200] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr[i] - arr[i + 1] >= 0)
//			cnt1++;
//		else if (arr[i] - arr[i + 1] <= 0)
//			cnt2++;
//	}
//	if (cnt1 == n - 1 || cnt2 == n - 1)
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//	return 0;
//}

//int main()
//{
//	int n, arr[200] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	int x;
//	scanf("%d", &x);
//	for (int i = 0; i < n + 1; i++)
//	{
//		if (x < arr[i])
//		{
//			int tmp = arr[i];
//			arr[i] = x;
//			x = tmp;
//		}
//	}
//	arr[n] = x;
//	for (int i = 0; i < n + 1; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int n, arr[200] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	int x;
//	scanf("%d", &x);
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//			arr[i] = 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//		else
//			continue;
//	}
//	return 0;
//}

//int main()
//{
//	int n, arr[200] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	for (int i = 0; i < n; i++)
//	{
//		int tmp = arr[i];
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[j] == tmp)
//				arr[j] = 0;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//		else
//			continue;
//	}
//	return 0;
//}

//int main()
//{
//	int n, arr[200] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	int x;
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (x < arr[i])
//		{
//			int tmp = arr[i];
//			arr[i] = x;
//			x = tmp;
//		}
//	}
//	arr[n] = x;
//	for (i = 0; i < n + 1; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 }, arr2[20] = { 0 };
//	/*arr1[20] = getchar();
//	arr2[20] = getchar();
//	int a = 0;
//	for (int i = 0; i < 20; i++)
//	{
//		if (putchar(arr1[i]) - putchar(arr2[i]) != 0)
//		{
//			printf("different\n");
//			a = 1;
//			break;
//		}
//		else
//			a = 0;
//
//	}
//	if (a == 0)
//		printf("same\n");*/
//
//	scanf("%s %s", &arr1, &arr2);
//	//int i = 0;
//	//for (int i = 0; i < 20; i++)
//	//{
//	//	if (arr1[i] != arr2[i])
//	//	{
//	//		i = 1;
//	//		printf("different\n");
//	//		break;
//	//	}
//	//	else
//	//		//printf("same\n");
//	//		i = 0;
//	//}
//	//if (i == 0)
//	//	printf("same\n");
//	if (strcmp(arr1, arr2)) // strcmp 的作用是 比较两个字符串 是否相同；若相同，返回值 为 0
//		printf("different\n");
//	else
//		printf("same\n");
//
//	return 0;
//}

//int main()
//{
//	int i, j, total, arr[200] = {0};
//	scanf("%d%d", &i, &j);
//	total = i * j;
//	for (int k = 0; k < j; k++)
//	{
//		for (int g = 0; g < i; g++)
//			scanf("%d", &arr[k * i + g]);
//	}
//	int sum = 0;
//	for (int k = 0; k < i * j; k++)
//	{
//		if (arr[k] > 0)
//			sum += arr[k];
//	}
//	printf("%d", sum);
//	return 0;
//}

//#define N 30000
//void bubble_sort(int* arr,int n) //冒泡函数是题目两大核心之一
//{
//	int i = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//			else
//				continue;
//		}
//	}
//}
//// 1 3 2 6 5 9 4 8 7
////    
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	//int total = n + m;
//	int arr[N] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	//printf("\n");
//
//	for (i = 0; i < m; i++)
//		scanf("%d", &arr[n + i]);// 题目第一大核心 就是将两段数组存在一起
//
//	//要通过代码实现数组的 升序排列
//	bubble_sort(arr,n+m);
//	
//
//	for (i = 0; i < n + m; i++)
//		printf("%d ", arr[i]);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	float arr[30] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%f", &arr[i * 6 + j]);
//			arr[i * 6 + 5] += arr[i * 6 + j];
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			printf("%.1f ", arr[i * 6 + j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int n, m;
//	int arr[60] = { 0 };
//	scanf("%d%d", &n, &m);// n 表示 行， m 表示 列
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i * m + j]);
//			// 第i（i=1,...）行第j（j=1...）列 是第(i-1)* m+ j 个数
//			//数组中  (i,j)   i*m+j+1
//		}
//	}
//	int x, y;
//	scanf("%d%d", &x, &y);
//	printf("%d", arr[(x-1) * m + (y-1)]);
//	return 0;
//}// 1 2 3 4
//1 3

int main()
{
	int n, m, arr[100] = {0};
	scanf("%d %d", &n, & m);
	//int total = n * m;// 5*6 =30 

	/*for (int i = 0; i < n*m; i++)
		scanf("%d", &arr[i]);*/

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; i < m; j++)
		{
			scanf("%d", &arr[i]);
			printf("%d ", arr[i]);
		}
		printf("\n");
		//printf("\n");
		//printf("\n");
	}
	return 0;
}
int main()
{
	int n = 0;
	int m = 0;
	int arr[100] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i]);
			printf("%d ", arr[i]);
		}
		printf("\n");
	}

	return 0;
}