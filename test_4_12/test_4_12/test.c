#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


// 利用 / 转义字符
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int s1 = 0;
//    int s2 = 0;
//    int s3 = 0;
//    int s4 = 0;
//    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
//    float s = s1 * 0.2 + s2 * 0.1 + s3 * 0.2 + s4 * 0.5;
//    printf("%.1f\n", s);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++)
//    {
//        printf("Happy new year!Good luck!\n");
//    }
//
//    return 0;
//}


//#include <stdio.h>
//
//int fm(int a, int b, int c)
//{
//    /*int max = 0;
//    if (b > a)
//        max = b;
//    else
//        max = a;
//    if (c > max)
//        return c;
//    else
//        return max;*/
//
//    if (a > b)
//    {
//        if (a > c)
//            return a;
//        else
//            return c;
//    }
//    else
//    {
//        if (b > c)
//            return b;
//        else
//            return c;
//    }
//
//
//}
//
//int main()
//{
//    int s1 = 0;
//    int s2 = 0;
//    int s3 = 0;
//    scanf("%d %d %d", &s1, &s2, &s3);
//
//    int max = fm(s1, s2, s3);
//    printf("%d", max);
//    return 0;
//}


//#include <stdio.h>
//#include<math.h>
//
//int main()
//{
//    int count = 0;
//    for (int i = 100; i < 1000; i++)
//    {
//        int n = 1;
//        for (int j = 2; j < i / 2; j++)
//        {
//            if (i % j == 0)
//            {
//                n = 0;
//                break;
//            }
//        }
//        if (n)
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}


//for (i = 0; i < n - 1; i++) 
//{
//	for (j = 0; j < n - 1 - i; j++) 
//	{
//		if (a[j] > a[j + 1]) 
//		{
//			temp = a[j];
//			a[j] = a[j + 1];
//			a[j + 1] = temp;
//		}
//
//	}
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int arr[200] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//
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
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i + 1; j < n; j++)
//        {
//            if (arr[j] == arr[i])
//                arr[j] = 0;
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i])
//            printf("%d ", arr[i]);
//    }
//
//    return 0;
//}





//#include <stdio.h>
//int main()
//{
//    int n;
//    //int sum=0;
//    scanf("%d", &n);
//    int arr[10][10];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//
//    }
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < i; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                sum = 1;
//                break;
//            }
//        }
//    }
//    if (sum == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int year = 0;
//    int mon = 0;
//    int day = 0;
//    scanf("%d %d %d", &year, &mon, &day);
//
//    printf("%d/%d/%d\n", day, mon, year);
//    return 0;
//}


