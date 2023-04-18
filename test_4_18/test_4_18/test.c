#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 10;
//
//	if (a > 5)
//		printf("%d", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	if (a == 10)
//	{
//		printf("%d\n", a);
//		printf("Hello world!\n");
//	}
//	return 0;
//}


//if (a > 5)
//{
//	if (a > 7)
//		printf("%d", a);
//	else
//		printf("%d", 5 - a);
//}

//if (a = 5)
//{
//
//}
//
//if (a == 5)
//{
//
//}
//
//if (5 == a)
//{
//
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//输入今天星期几，判断是工作日还是周末
//	switch (n)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("Weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("Weekend\n");
//		break;
//	default:
//		printf("wrong!\n");
//		break;
//	}
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    for (int i = 0; i < n - 1; i++)
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//
//    for (int i = 0; i < 5; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}


//#include <stdio.h>
//#include<string.h>
//
//int main()
//{
//    char ch = 0;
//
//
//    int ca = 0;
//    int cb = 0;
//
//    while ((ch = getchar()) != '0')
//    {
//        if (ch == 'A')
//            ca++;
//        else if (ch == 'B')
//            cb++;
//    }
//    if (ca > cb)
//        printf("A\n");
//    else if (cb > ca)
//        printf("B\n");
//    else if (ca == cb)
//        printf("E\n");
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%x %o", &a, &b);
//    printf("%d\n", a + b);
//    return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%2d ", i, j, i * j);
//		printf("\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 9,5,6,10,22,66,82,3,0,60 };
//	int max = arr[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += 1.0 / i;
//		}
//		else if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int s1 = i / 10;
//		if (s1 == 9)
//			count++;
//		int s2 = i % 10;
//		if (s2 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



//int main()
//{
//	int n = 7;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == n)
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//		if (arr[mid] > n)
//			right = mid - 1;
//		if (arr[mid] < n)
//			left = mid + 1;
//
//	}
//	
//	return 0;
//}


//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        while (i)
//        {
//            if (i % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            i /= 10;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 2019; i += 1)
//    {
//        int m = i;
//        while (m)
//        {
//            if (m % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            m /= 10;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}

