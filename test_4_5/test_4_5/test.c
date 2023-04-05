#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		//getchar();
//		
//		//2  3个位置 两颗星
//		//3  5个位置 三颗星
//		if (n >= 2 && n <= 20)
//		{
//			int i = 0;
//			for (i = 1; i <= n; i++)
//			{
//				/*int j = 0;*/
//				int mp = n - i, j;
//				//printf(" "); //第i行 在输出第一个*之前 我希望能打印 n-i 个 ‘ ’
//				for (j = 0; j < mp; j++)
//				{
//					printf(" ");
//				}
//				//我想 以‘* ’作为一个整体输出
//				//我希望打印最后一个 ‘* ’组合时 不打印‘ ’
//				//我要判断每一行打印 几个组合
//				for (j = 0; j < i; j++)
//				{
//					printf("* ");
//					
//						//printf(" ");
//				}
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		/*int i = 0;
//		for (i = 5; i > 0; i--)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf()
//			}
//		}*/
//		int i = 0;
//		//每一行 第一个 ‘* ’组合前 打印多少个‘ ’
//		//i=5；i>0;i--  第i行 打印 n-i 个 ‘ ’
//		for (i = n; i > 0; i--)
//		{
//			for (int j = 0; j < (n - i); j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j < i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i;
//		for (i = 1; i <=(n+1); i++)//i=0;i<(n+1);i++
//		{
//			int mp = (n + 1) - i;
//			for (int j = 1; j <= mp; j++)
//				printf(" ");
//			for (int j = 1; j <= i; j++)//第j 行 会打印出j个'* '
//				printf("* ");
//			printf("\n");
//		}
//		//5
//
//		for (i = n; i > 0; i--)
//		{
//			printf(" ");
//			for (int j = 0; j <(n-i); j++)
//				printf(" ");
//			for (int j = 0; j < i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = n; i >0; i--)
//		{
//			for (int j=1;j<=(i+1);j++)
//				printf("* ");
//			printf("\n");
//		}
//		printf("*\n");
//		for (i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= i+1; j++)
//				printf("* ");
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

//int main() 
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i;
//		for (i = 1; i <= n + 1; i++)
//		{
//			for (int j = 0; j < (n+1-i); j++)
//				printf("  ");
//			for (int j = 1; j <= i; j++)
//				printf("*");
//			printf("\n");
//		}
//		for (i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= i; j++)
//				printf("  ");
//			for (int j = 1; j <= (n + 1 - i); j++)
//				printf("*");
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= i - 1; j++)
//				printf(" ");
//			printf("*\n");
//			
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n - i; j++)
//				printf(" ");
//			printf("*\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n % 2 == 1)
//		{
//			int i;
//			for ( i = 1; i <= (n / 2 ); i++)
//			{
//				for (int j = 1; j <= i - 1; j++)
//					printf(" ");
//				printf("*");
//				for (int j = 1; j <=(n -2*i); j++)
//					printf(" ");
//				printf("*\n");
//
//			}
//			for (int j = 1; j <= (n - n / 2 - 1); j++)
//				printf(" ");
//			printf("*\n");
//			for (i = 1; i <= (n / 2); i++)
//			{
//				/*for (int j = 1; j <= (n - 2 * i); j++)
//					printf(" ");*/
//				for (int j = 1; j <= (n / 2 - i); j++)
//					printf(" ");
//				printf("*");
//
//				for (int j = 1; j <= (2 * i - 1); j++)
//					printf(" ");
//				/*for (int j = 1; j <= (n -2 - 2*i); j++)
//					printf(" ");*/
//				// * * 
//				//*   *
//				printf("*\n");
//				//for (int j = 1; j <= (n - 2 ); j++)
//					//printf(" ");
//				//printf("*\n");
//			}
//		}
//
//		if (n % 2 == 0)
//		{
//			int i;
//			for (i = 1; i <= (n / 2); i++)
//			{
//				for (int j = 1; j <= i - 1; j++)
//					printf(" ");
//				printf("*");
//				for (int j = 1; j <= (n - 2 * i); j++)
//					printf(" ");
//				printf("*\n");
//
//			}
//			for (i = 1; i <= (n / 2); i++)
//			{
//				for (int j = 1; j <= (n / 2 - i); j++)
//					printf(" ");
//				printf("*");
//				for (int j = 1; j <= (2 * i - 2); j++)
//					printf(" ");
//				printf("*\n");
//			}
//			/*for (int j = 1; j <= (n - n / 2 - 1); j++)
//				printf(" ");
//			printf("*\n");*/
//		}
//			
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i;
//		for (i = 1; i <= n; i++)
//			printf("* ");
//		printf("\n");
//		
//		for (i = 1; i <= (n - 2); i++)
//		{
//			printf("* ");
//			for (int j = 1; j <= (n - 2); j++)
//				printf("  ");
//			printf("* \n");
//		}
//		for (i = 1; i <= n; i++)
//			printf("* ");
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		printf("* \n");
//		int i;
//		for (i = 1; i <= n - 2; i++)
//		{
//			printf("* ");
//			for (int j = 1; j <= i - 1; j++)
//				printf("  ");
//			printf("* \n");
//		}
//		//printf("")
//		for (i = 1; i <= n; i++)
//			printf("* ");
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	printf("Happy New Year*2019*\n");
//	return 0;
//}

//int main()
//{
//	float a, b, c, d, e, ave;
//	scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
//	ave = (a + b + c + d + e) / 5;
//	//printf(".2f\n", ave);
//	printf("%.2f\n", ave);
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n >= 10)
//		printf("Danger++\n");
//	if (n >= 4 && n <= 9)
//		printf("Danger\n");
//	if (n < 4)
//		printf("Good\n");
//	return 0;
//}

//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n == 200)
//			printf("OK\n");
//		if (n == 202)
//			printf("Accepted\n");
//		if (n == 400)
//			printf("Bad Request\n");
//		if (n == 403)
//			printf("Forbidden\n");
//		if (n == 404)
//			printf("Not Found\n");
//		if (n == 500)
//			printf("Internal Server Error\n");
//		if (n == 502)
//			printf("Bad Gateway\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i;
//		for (i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int find_max(int a, int b, int c, int d, int e, int f, int g)
//{
//	int max = a;
//
//}
//int main()
//{
//	/*int i = 0, arr[7] = { 0 },total=0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &arr[i]);
//		total += arr[i];
//	}*/
//	//while (scanf("%d", &arr[6])!= EOF)
//	//{
//	//	total += arr[6];
//		/*int max=arr[0], min=arr[0];
//		for (i = 1; i < 7; i++)
//		{
//			if (arr[i] > max)
//				max = arr[i];
//			if (arr[i] < min)
//				min = arr[i];
//		}*/
//
//	int a, b, c, d, e, f, g;
//	while(scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g)!=EOF)
//	{
//		int total = a + b + c + d + e + f + g;
//		int max, min;
//		max = find_max(a, b, c, d, e, f, g);
//		min = find_min(a, b, c, d, e, f, g);
//		float ave = (total - max - min)  / 5.0;
//		printf("%.2f\n", ave);
//	}
//	
//	return 0;
//}


//int main()
//{
//	int a,max=0,min=100,total=0,count=0;
//	while (scanf("%d", &a) != EOF)
//	{
//		total += a;
//		if (a > max)
//			max = a;
//		if (a < min)
//			min = a;
//		count++;
//		if (count == 7)
//		{
//			float ave = (total - max - min) / 5.0;
//			printf("%.2f\n", ave);
//			max = 0;
//			min = 100;
//			total = 0;
//			count = 0;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int N,i;
//	scanf("%d", &N);
//	int arr[200] = { 0 };
//	for (i = 0; i < N; i++)
//		scanf("%d", &arr[i]);
//	int x;
//	scanf("%d", &x);
//	for (i = 0; i < N + 1; i++)
//	{
//		if (x <=arr[i])
//		{
//			int tmp = arr[i];
//			arr[i] = x;
//			x = tmp;
//		}
//	}
//	arr[N] = x;
//	for (i = 0; i < N + 1; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}

int main()
{
	int n, arr[100] = { 0 };
	while (scanf("%d", &n) != EOF)
	{
		int i = 0, j = 0, count1 = 0;
		for (i = 2; i <=n ; i++)// 条件中，两个并立的条件只需用 ','隔开，不需要用 &&
		{
			arr[i] = i;
		}

		for (i = 2; i < n; i++)
		{
			for (j = i + 1; j <=n; j++)
			{
				if (arr[j] % i == 0)
				{
					arr[j] = 0;

				}

				/*count2 = count1;
				count1 = 0;*/ //这里出了问题
				/*if (j >= 2)
					count2 = count1 - count2;*/
			}
		}
		for (i = 2; i <= n; i++)
		{
			if (arr[i] == 0)
				count1++;
			else
				printf("%d ", arr[i]);
		}
		printf("\n%d\n", count1);
	}
	return 0;
}