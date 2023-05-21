#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//#define N 1000
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[N] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    //去重
//    for (i = 0; i < n - 1; i++)
//    {
//        int j = 0;
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[j] == arr[i])
//                arr[j] = 0;
//        }
//    }
//    //打印
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i])
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}


//#define N 1000
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[N] = { 0 };
//    int arr2[N] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int flag = 1;
//        scanf("%d", &arr[i]);
//        for (int j = 0; j < i; j++)
//        {
//            if (arr2[j] == arr[i])
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//            arr2[i] = arr[i];
//    }
//
//    //打印
//    for (i = 0; i < n; i++)
//    {
//        if (arr2[i])
//            printf("%d ", arr2[i]);
//    }
//    return 0;
//}


//#define N 2000
//
//void bubble_sort(int arr[], int n)
//{
//    int i = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n - i - 1; j++)
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
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[N] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    for (i = 0; i < m; i++)
//        scanf("%d", &arr[n + i]);
//    bubble_sort(arr, n + m);
//    for (i = 0; i < n + m; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}


//int main()
//{
//    float arr[5][6] = { 0 };
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        float sum = 0.0f;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &arr[i][j]);
//            sum += arr[i][j];
//        }
//        arr[i][5] = sum;
//    }
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 6; j++)
//            printf("%.1f ", arr[i][j]);
//        printf("\n");
//    }
//    return 0;
//}


//int main()
//{
//    int arr[5][5] = { 0 };
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//            scanf("%d", &arr[i][j]);
//    }
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &x, &y);
//    printf("%d\n", arr[x - 1][y - 1]);
//    return 0;
//}


#include<limits.h>

//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int hm = INT_MIN;
//    int x = 0;
//    int y = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (hm < arr[i][j])
//            {
//                hm = arr[i][j];
//                x = i;
//                y = j;
//            }
//        }
//    }
//    printf("%d %d", x + 1, y + 1);
//    return 0;
//}


