#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//    int y = 0;
//    if (x < 0)
//        y = 1;
//    else if (x == 0)
//        y = 0;
//    else
//        y = -1;
//    printf("%d", y);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//            scanf("%d", &arr[i][j]);
//    }
//    int k = 0;
//    scanf("%d", &k);
//    for (int i = 0; i < k; i++)
//    {
//        char ch = 0;
//        int a = 0;
//        int b = 0;
//        getchar();
//        scanf("%c %d %d", &ch, &a, &b);
//        //getchar();
//        if (ch == 'r')
//        {
//            for (int i = 0; i < m; i++)
//            {
//                int tmp = arr[a-1][i];
//                arr[a-1][i] = arr[b-1][i];
//                arr[b-1][i] = tmp;
//            }
//        }
//        else if (ch == 'c')
//        {
//            for (int i = 0; i < n; i++)
//            {
//                int tmp = arr[i][a-1];
//                arr[i][a-1] = arr[i][b-1];
//                arr[i][b-1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//            printf("%d ", arr[i][j]);
//        printf("\n");
//    }
//    return 0;
//}