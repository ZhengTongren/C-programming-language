#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        for (i = 0; i < n + 1; i++)
//        {
//            int j = 0;
//            for (j = 0; j < 2 * (n - i); j++)
//                printf(" ");
//            for (j = 0; j <= i; j++)
//                printf("*");
//            printf("\n");
//        }
//        for (i = 1; i < n + 1; i++)
//        {
//            int j = 0;
//            for (j = 0; j < 2 * i; j++)
//                printf(" ");
//            for (j = 0; j < n + 1 - i; j++)
//                printf("*");
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
//            for (j = 0; j < i; j++)
//                printf(" ");
//            printf("*\n");
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
//            for (j = 0; j < n; j++)
//            {
//                if (j == i || j + i == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - i - 1; j++)
//                printf(" ");
//            printf("*");
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
//            for (j = 0; j < n; j++)
//            {
//                if (i == 0 || i == n - 1)
//                    printf("* ");
//                else if (j == 0 || j == n - 1)
//                    printf("* ");
//                else
//                    printf("  ");
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
//                if (j == 0)
//                    printf("* ");
//                else if (i == j)
//                    printf("* ");
//                else if (i == n - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n >= 10)
//        printf("Danger++\n");
//    else if (n >= 4 && n <= 9)
//        printf("Danger\n");
//    else
//        printf("Good\n");
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        switch (n)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
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
//        for (i = 1; i <= n; i++)
//        {
//            int j = 0;
//            for (j = 1; j <= i; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


#include<limits.h>

//int a = INT_MAX;


//#include<limits.h>
//
//int main()
//{
//    int arr[7] = { 0 };
//    while (~scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]))
//    {
//        int max = INT_MIN;
//        int min = INT_MAX;
//        int sum = 0;
//        for (int i = 0; i < 7; i++)
//        {
//            sum += arr[i];
//            if (arr[i] > max)
//                max = arr[i];
//            if (arr[i] < min)
//                min = arr[i];
//        }
//        float ave = (sum - max - min) / 5.0;
//        printf("%.2f\n", ave);
//    }
//    return 0;
//}


//void bubble_sort(int arr[], int n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &arr[n]);
//    bubble_sort(arr, n + 1);
//    for (int i = 0; i < n + 1; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int m = 0;
//    scanf("%d", &m);
//    int j = n;
//    for (j = n; arr[j - 1] > m; j--)
//        arr[j] = arr[j - 1];
//    arr[j] = m;
//    for (int i = 0; i < n + 1; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);//有序数组元素的个数
//    int arr[50] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)//输入有序数组
//    {
//        scanf("%d", &arr[i]);
//    }
//    int m = 0;
//    scanf("%d", &m);//插入值
//    for (i = n; arr[i - 1] > m; i--)//将所有比m大的元素向右移一位
//        arr[i] = arr[i - 1];
//    arr[i] = m;
//    for (i = 0; i < n + 1; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    int m = 0;
//    scanf("%d", &m);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != m)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}


