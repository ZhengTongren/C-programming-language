#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    long long a = 0;
//    long long b = 0;
//    scanf("%lld %lld", &a, &b);
//    //24 6
//    //4 0
//    long long tmp = a % b;
//    long long a1 = a;
//    long long b1 = b;
//    while (tmp)
//    {
//        a = b;
//        b = tmp;
//        tmp = a % b;
//    }
//    long long s = b + a1 * b1 / b;
//    printf("%lld\n", s);
//    return 0;
//}


//int Print(int n)
//{
//    if (n > 9)
//    {
//        return (n % 10) % 2 + 10 * Print(n / 10);
//    }
//    else 
//    {
//        return n % 2;
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Print(n);
//    printf("%d\n", ret);
//    return 0;
//}


//#include<string.h>
//
//int main()
//{
//    char ch[8000] = { 0 };
//    scanf("%s", ch);
//    //CH
//    long long cn1 = 0;
//    long long cn2 = 0;
//    long long cn3 = 0;
//    int len = strlen(ch);
//    for (int i = 0; i < len; i++)
//    {
//        if (ch[i] == 'C')
//            cn1++;
//        else if (ch[i] == 'H')
//            cn2 += cn1;
//        else if (ch[i] == 'N')
//            cn3 += cn2;
//    }
//    printf("%lld\n", cn3);
//    return 0;
//}


//#include<math.h>
//
//int main()
//{
//    int count = 0;
//    for (int i = 100; i <= 999; i++)
//    {
//        int flag = 1;
//        for (int j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (1 == flag)
//            count++;
//    }
//    printf("%d\n", count);
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
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int arr2[100] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        int flag = 0;
//        for (int j = 0; j < i; j++)
//        {
//            if (arr[j] == arr[i])
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (0 == flag)
//            arr2[i] = arr[i];
//    }
//    bubble_sort(arr2, n);
//    for (int i = 0; i < n; i++)
//        if (arr2[i])
//            printf("%d ", arr2[i]);
//    return 0;
//}


