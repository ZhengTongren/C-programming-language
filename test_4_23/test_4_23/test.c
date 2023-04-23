#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int binary_search(int arr[], int n, int k)
//{
//	int left = 0;
//	int right = k - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = sizeof(arr) / sizeof(arr[0]);
//	int n = 13;
//
//	//搜索到了 返回 下标
//	//没搜到 返回 -1
//	int ret = binary_search(arr, n, k);
//
//	if (ret == -1)
//		printf("没找到\n");
//	else
//		printf("找到了，下标是%d\n", ret);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int math = 0;
//    int chinese = 0;
//    int english = 0;
//    scanf("%d %d %d", &math, &chinese, &english);
//
//    float s = (math + chinese + english) / 3.0;
//    if (s >= 60)
//        printf("NO\n");
//    else
//        printf("YES\n");
//    return 0;
//}


//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n >= 90 && n <= 100)
//        printf("A\n");
//    else if (n >= 80 && n < 90)
//        printf("B\n");
//    else if (n >= 70 && n < 80)
//        printf("C\n");
//    else if (n >= 60 && n < 70)
//        printf("D\n");
//    else if (n >= 0 && n < 60)
//        printf("E\n");
//    else
//        printf("F\n");
//    return 0;
//}

//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int c = 0;
//    int m = 0;
//    int e = 0;
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d %d %d", &c, &m, &e);
//        int s = c + m + e;
//        if (s < 180)
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}
//

//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int m = 0;
//    int max = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &m);
//        if (m > max)
//            max = m;
//    }
//    printf("%d\n", max);
//    return 0;
//}
//


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    int ret = 1;
//
//    for (int i = 1; i <= n; i++)
//    {
//        ret *= i;
//        sum += ret;
//    }
//    printf("%d\n", sum);
//    return 0;
//}


//float max3(int a, int b, int c)
//{
//    if (b > a)
//        a = b;
//    if (c > a)
//        a = c;
//    return a;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//
//    float m = max3(a + b, b, c) * 1.0 / (max3(a, b + c, c) + max3(a, b, b + c));
//    printf("%.2f", m);
//    return 0;
//}

//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[200] = { 0 };
//    for (int i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//
//    int k = 0;
//    scanf("%d", &k);
//    int count = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] == k)
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int count1 = 0;
//    int count2 = 0;
//
//    for (int i = 1; i <= n; i++)
//    {
//        if (i % 2 == 0)
//            count2++;
//        else
//            count1++;
//    }
//    printf("%d %d\n", count1, count2);
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    float max = 0;
//    float min = 100;
//    float ave = 0;
//    float sco = 0;
//    //float sum=0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%f", &sco);
//        if (sco > max)
//            max = sco;
//        if (sco < min)
//            min = sco;
//        ave += sco;
//    }
//    ave /= n;
//    printf("%.2f %.2f %.2f", max, min, ave);
//    return 0;
//}

//
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
//void dedup(int arr[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i + 1; j < n; j++)
//        {
//            if (arr[j] == arr[i])
//            {
//                arr[j] = -1;
//            }
//            else if (arr[j] > arr[i])
//            {
//                break;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[200] = { 0 };
//
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    bubble_sort(arr, n);
//    dedup(arr, n);
//    //把所有重的数 赋值 -1
//
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != -1)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}

//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100000] = { 0 };
//    int tmp = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}


