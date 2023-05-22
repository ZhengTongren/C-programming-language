#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    int flag = 1;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            if (arr1[i][j] != arr2[i][j])
//            {
//                flag = 0;
//                break;
//            }
//        }
//    }
//    if (1 == flag)
//        printf("Yes\n");
//    else
//        printf("No\n");
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10][10] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//            scanf("%d", &arr[i][j]);
//    }
//    int flag = 1;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < i; j++)
//        {
//            if (arr[i][j])
//            {
//                flag = 0;
//                break;
//            }
//        }
//    }
//    if (1 == flag)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            arr2[j][i] = arr[i][j];
//        }
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//            printf("%d ", arr2[i][j]);
//        printf("\n");
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[30][30] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            if (j == 0 || i == j)
//                arr[i][j] = 1;
//            else
//                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= i; j++)
//            printf("%5d", arr[i][j]);
//        printf("\n");
//    }
//    return 0;
//}


//long long Six(long long n)
//{
//    if (n >= 6)
//        return n % 6 + 10 * Six(n / 6);
//    else
//        return n;
//}
//
//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    long long a = Six(n);
//    printf("%lld\n", a);
//    return 0;
//}


//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    long long sum = (n + 1) * n / 2;
//    printf("%lld\n", sum);
//    return 0;
//}


//int main()
//{
//    int h = 0;
//    int m = 0;
//    int k = 0;
//    scanf("%d:%d %d", &h, &m, &k);
//    h = (h + (k + m) / 60) % 24;
//    m = (k + m) % 60;
//    printf("%02d:%02d\n", h, m);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int h = n / 12 * 4 + 2;
//    printf("%d\n", h);
//    return 0;
//}


//int Fib(int n)
//{
//    if (n > 2)
//        return Fib(n - 1) + Fib(n - 2);
//    else
//        return n;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int s = Fib(n);
//    printf("%d\n", s);
//    return 0;
//}


//#define N 100000
//
//void bubble_sort(int arr[], int sz)
//{
//    for (int i = 0; i < sz - 1; i++)
//    {
//        for (int j = 0; j < sz - i - 1; j++)
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
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[N] = { 0 };
//    int arr2[N] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//
//        int flag = 1;
//        for (int j = 0; j < i; j++)
//        {
//            if (arr[j] == arr[i])
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (1 == flag)
//            arr2[i] = arr[i];
//    }
//    //int sz = sizeof(arr2) / sizeof(arr2[0]);
//    bubble_sort(arr2, n);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr2[i])
//            printf("%d ", arr2[i]);
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100000] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (int i = 0; i < n; i++)
//        if (arr[i])
//            printf("%d ", arr[i]);
//    return 0;
//}


