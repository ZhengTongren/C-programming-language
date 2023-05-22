#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int c = 0;
//    int m = 0;
//    int e = 0;
//    float ave = 0.0f;
//    int count = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d %d %d", &c, &m, &e);
//        ave = (c + m + e) / 3.0;
//        if (ave < 60)
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}


//#include<limits.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int max = INT_MIN;
//    for (int i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        if (tmp > max)
//            max = tmp;
//    }
//    printf("%d\n", max);
//    return 0;
//}


// n!
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


// 1!+2!+...+n!
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//		ret = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int max3(int a, int b, int c)
//{
//    if (b > a)
//        a = b;
//    return a > c ? a : c;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    float m = 1.0 * max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
//    printf("%.2f\n", m);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    int arr[100] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    int x = 0;
//    scanf("%d", &x);
//    int count = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] == x)
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}


//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;");
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
//    int flag = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < i; j++)
//            if (arr[i][j])
//            {
//                flag = 1;
//                break;
//            }
//    }
//    if (0 == flag)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}


