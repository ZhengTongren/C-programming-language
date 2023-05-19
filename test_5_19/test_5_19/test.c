#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    int y = 0;
//    int m = 0;
//    while (scanf("%d %d", &y, &m) == 2)
//    {
//        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//            printf("31\n");
//        else if (m == 4 || m == 6 || m == 9 || m == 11)
//            printf("30\n");
//        else if (y % 4 == 0 && m == 2)
//            printf("29\n");
//        else
//            printf("28\n");
//    }
//    return 0;
//}


//int main()
//{
//    double a = 0.0;
//    double b = 0.0;
//    char ch = 0;
//    while (scanf("%lf%c%lf", &a, &ch, &b) == 3)
//    {
//        if (ch == '+')
//            printf("%.4f+%.4f=%.4f\n", a, b, a + b);
//        else if (ch == '-')
//            printf("%.4f-%.4f=%.4f\n", a, b, a - b);
//        else if (ch == '*')
//            printf("%.4f*%.4f=%.4f\n", a, b, a * b);
//        else if (ch == '/')
//        {
//            if (b == 0)
//                printf("Wrong!Division by zero!\n");
//            else
//                printf("%.4f/%.4f=%.4f\n", a, b, a / b);
//        }
//        else
//            printf("Invalid operation!\n");
//
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        for (i = n; i > 0; i--)
//        {
//            int j = 0;
//            for (j = 0; j < i; j++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            int i = 0;
//            for (i = 0; i < n - j - 1; i++)
//                printf("  ");
//            for (i = 0; i <= j; i++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n - 1 - i; j++)
//				printf(" ");
//			for (j = 0; j <= i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//				printf(" ");
//			for (j = 0; j < n - i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n - i; j++)
//				printf(" ");
//			for (j = 0; j <= i; j++)
//				printf("* ");
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			printf(" ");
//			for (j = 0; j < i; j++)
//				printf(" ");
//			for (j = 0; j < n - i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//err
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n + 1 - i; j++)
//				printf("* ");
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n + i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n + 1 - i; j++)
//				printf("* ");
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i + 2; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n + 1 - i; j++)
//				printf("* ");
//			printf("\n");
//		}
//		for (i = 1; i < n+1; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//    int n = 0;
//    int arr[100] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    int m = 0;
//    scanf("%d", &m);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != m)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    int arr[100] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    int m = 0;
//    int count = 0;
//    scanf("%d", &m);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != m)
//            count++;
//    }
//    printf("%d\n", count);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != m)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}


