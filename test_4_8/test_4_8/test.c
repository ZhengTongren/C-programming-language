#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int arr[200] = { 0 };
//    int ma, mb, max = 0;
//    for (int i = 0; i < a; i++)
//    {// 1 1 1 1 1    1 1 1 1 1 
//        for (int j = 0; j < b; j++)
//        {
//            scanf("%d", &arr[i * b + j]);
//            if (arr[i * b + j] > max)
//            {
//                max = arr[i * b + j];//这是题目关键
//                ma = i+1;
//                mb = j+1;
//            }
//        }
//    }
//    printf("%d %d", ma , mb );
//    return 0;
//}


//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    char arr1[200] = { 0 }, arr2[200] = { 0 };
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < b; j++)
//            scanf("%d", &arr1[i * b + j]);
//    }
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < b; j++)
//            scanf("%d", &arr2[i * b + j]);
//    }
//    if (strcmp(arr1, arr2) == 0)
//        printf("Yes\n");
//    else
//        printf("No\n");
//    return 0;
//}


//int main()
//{
//	int n, arr[200] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//			scanf("%d", &arr[i * n + j]);
//	}
//	int a = 1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if(j < i)
//			{
//				if (arr[i * n + j] == 0)
//					a = 1;
//				else
//				{
//					a = 0;
//					break;
//				}
//			}
//			
//			
//		}
//	}
//	if (a == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int total = n * m, arr[200] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i * m + j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			//scanf("%d", &arr[i * n + j]);
//			printf("%d ", arr[i * n + j]);
//		}
//		printf("\n");
//	}
//		
//	return 0;
//}


//int main()
//{
//	int arr[20][20] = { 0 },n, m;
//
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//			scanf("%d", &arr[i][j]);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n, m, arr1[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//			scanf("%d", &arr1[i][j]);
//	}
//	
//	int k;
//	scanf("%d", &k);
//
//	char g = 'r';
//	int c1, c2;
//	
//	
//	while(k)
//	{
//		
//		scanf("%c %d %d", &g, &c1, &c2);
//	
//
//	
//		if (g == 'r')
//		{
//			for (int i = 0; i < m; i++)
//			{
//				int tmp = arr1[c2-1][i];
//				arr1[c2-1][i] = arr1[c1-1][i];
//				arr1[c1-1][i] = tmp;
//			}
//		}
//
//
//		else if (g == 'c')
//		{
//			for (int i = 0; i < n; i++)
//			{
//				int tmp = arr1[i][c2-1];
//				arr1[i][c2-1] = arr1[i][c1-1];
//				arr1[i][c1-1] = tmp;
//			}
//		}
//		k--;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//		
//	return 0;
//}



//int main() 
//{
//    int m = 0, n = 0;
//    scanf("%d %d", &m, &n);
//    int s[10][10];
//    //int ss[n][m];//一开始想用两个矩阵，发现后面如果多组输入，更改的一直是初始矩阵，且代码繁杂,采用一个矩阵的方式
//    for (int i = 0; i < m; i++) {//初始化
//        for (int j = 0; j < n; j++) {
//            scanf("%d ", &s[i][j]);
//        }
//    }
//    int t = 0;//变换次数
//    char flag = 'r';//判断行还是列变
//    int c1 = 0, c2 = 0;//变换的行（列）号
//    int temp = 0;
//    scanf("%d ", &t);
//    while (t) {
//        scanf(" %c %d %d", &flag, &c1, &c2);
//        c1--; c2--;//给的是行号，--之后才是数组下标值
//        if (flag == 'r') {
//            for (int j = 0; j < n; j++) {
//                temp = s[c2][j];//交换c1和c2行
//                s[c2][j] = s[c1][j];
//                s[c1][j] = temp;
//            }
//        }
//
//        if (flag == 'c') {
//            for (int i = 0; i < m; i++) {//交换C1和C2列
//                temp = s[i][c2];
//                s[i][c2] = s[i][c1];
//                s[i][c1] = temp;
//            }
//        }
//        t--;
//    }
//    //打印最终数组
//    for (int i = 0; i < m; i++) 
//	{
//        for (int j = 0; j < n; j++)
//            printf("%d ", s[i][j]);
//        printf("\n");
//    }
//
//    return 0;
//}

//int main()
//{
//	int n, m, arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int k;
//	scanf("%d", &k);
//	char ch;
//	int c1, c2;
//
//	for (int c = 0; c < k; c++)
//	{
//		getchar();// getchar() 吸收 '\n'
//		scanf("%c %d %d", &ch, &c1, &c2);
//		c1--;
//		c2--;
//		if (ch == 'r')//行行变换
//		{
//			for (j = 0; j < m; j++)
//			{
//				int tmp = arr[c1][j];
//				arr[c1][j] = arr[c2][j];
//				arr[c2][j] = tmp;
//			}
//		}
//		else if (ch == 'c')
//		{
//			for (i = 0; i < n; i++)
//			{
//				int tmp = arr[i][c1];
//				arr[i][c1] = arr[i][c2];
//				arr[i][c2] = tmp;
//			}
//		}
//		
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int n;
//	int arr[10][10] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//				printf("%5d", arr[i][j]);
//
//			}
//			else if (i == j)
//			{
//				arr[i][j] = 1;
//				printf("%5d", arr[i][j]);
//			}
//			else if (i > 1 && j > 0 && j < i)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//				printf("%5d", arr[i][j]);
//			}
//			else
//				continue;
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	char arr[3][3] = { 'O' };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			//getchar();
//			scanf("%c", &arr[i][j]);
//			getchar();
//		}
//	}
//	int a = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] )
//		{
//			if (arr[i][0] == 'K' )
//
//			{
//				printf("KiKi wins!\n");
//				a = 1;
//			}
//			else if (arr[i][0] == 'B' )
//			{
//				printf("BoBo wins!\n");
//				a = 1;
//			}
//			
//		}
//		else if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
//		{
//			if ( arr[0][i] == 'K')
//
//			{
//				printf("KiKi wins!\n");
//				a = 1;
//			}
//			else if ( arr[0][i] == 'B')
//			{
//				printf("BoBo wins!\n");
//				a = 1;
//			}
//		}
//		//else if(arr[][])
//	}
//	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] )
//	{
//		if (arr[0][0] == 'K' )
//		{
//			printf("KiKi wins!\n");
//			a = 1;
//		}
//		else if (arr[0][0] == 'B' )
//		{
//			printf("BoBo wins!\n");
//			a = 1;
//		}
//	}
//	else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
//	{
//		if (arr[0][2] == 'K')
//		{
//			printf("KiKi wins!\n");
//			a = 1;
//		}
//		else if (arr[0][2] == 'B')
//		{
//			printf("BoBo wins!\n");
//			a = 1;
//		}
//	}
//	if (a == 0)
//		printf("No winner!\n");
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	// 60 6 10 6 1 6 0 60= 36 +24  140
//	//3600 60 60 < n 0
//	// 6*6*6 6*6 6 1
//	int count;
//	for (int i = 1;; i *= 6)
//	{
//		int n1 = n / 6;
//		count++;
//		if (n1 < 6)
//			break;
//	}
//	for()
//	return 0;
//}

//void print(int n)
//{
//	if (n > 5)
//		print(n / 6);
//	printf("%d", n % 6);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum;
//	sum = n * (n + 1) / 2;
//	printf("%d", sum);
//	return 0;
// 
//}

//int main()
//{
//	int hour1, min1;
//	scanf("%d:%d", &hour1, &min1);
//	int hour2 = 0, min2 = 0;
//	scanf("%d", &min2);
//	hour2 = ((min1+min2) / 60+hour1)%24;
//
//	min2 = (min1+min2) % 60;
//	
//	printf("%02d:%02d\n", hour2, min2);  // %02d 这个用法需要记住
//	return 0;
//}

//int main()
//{
//	int n;
//	float n1;
//	scanf("%d", &n);
//	int min;
//	if (n + 1 <= 12)
//		n1 = 0.5;
//	else
//		n1 = (n + 1) / 12+1;
//
//	min = n1 * 4;
//	printf("%d\n", min);
//
//	return 0;
//}

//int main()
//{
//	int min,n;
//	float n1;
//	scanf("%d", &n);
//	//if (n + 1 <= 12)
//	//	//min = 2;
//	//	n1 = 0.5;
//	//else
//	//{
//	//	n1 = (n + 1) / 12 ;
//	//	n1 += 0.5;
//	//}
//	//min = 4 * n1;
//	if (n + 1 <= 12)
//		min = 2;
//	else
//	{
//		min = 4*((n + 1) / 12 + 0.5);
//	}
//	
//	printf("%d", min);
//
//	return 0;
//}

//int main()
//{
//	long long n, m;
//	scanf("%ld %ld", &n, &m);
//	if (n < m)
//	{
//		long long tmp = n;
//		n = m;
//		m = tmp;
//	}
//	long long z1 = n;
//	long long z2 = m;
//	long long z;
//	while (z=z1%z2)
//	{
//		z1 = z2;
//		z2 = z;
//	}
//	long long max = n * m / z2;
//	//int sum = z2 + n * m / z2;
//	printf("%ld", max+z2);
//	return 0;
//}

