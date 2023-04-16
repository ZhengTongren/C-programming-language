#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//    int year, mon;
//    while (scanf("%d %d", &year, &mon) != EOF)
//    {
//        switch (mon)
//        {
//        case 2:
//            if (year % 4 == 0)
//                printf("29\n");
//            else
//                printf("28\n");
//            break;
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            printf("31\n");
//            break;
//        default:
//            printf("30\n");
//            break;
//        }
//    }
//    return 0;
//}
//


//#include <stdio.h>
//
//int main()
//{
//    double num1 = 0;
//    double num2 = 0;
//    char run = 0;
//
//    while (scanf("%lf %c %lf", &num1, &run, &num2) != EOF)
//    {
//        if (run == '+')
//            printf("%.4f+%.4f=%.4f", num1, num2, num1 + num2);
//        else if (run == '-')
//            printf("%.4f-%.4f=%.4f", num1, num2, num1 - num2);
//        else if (run == '*')
//            printf("%.4f*%.4f=%.4f", num1, num2, num1 * num2);
//        else if (run == '/')
//        {
//            if (num2 == 0)
//                printf("Wrong!Division by zero!\n");
//            else
//                printf("%.4f/%.4f=%.4f", num1, num2, num1 / num2);
//        }
//        else {
//            printf("Invalid operation!\n");
//        }
//    }
//    return 0;
//}
//


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j <= i; j++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = n; i > 0; i--)
//        {
//            for (int j = 0; j < i; j++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j < n - i; j++)
//                printf("  ");
//            for (int k = 0; k < i; k++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 1234;
//    printf("%#o ", n);
//    printf("%#X\n", n);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0xABCDEF;
//    printf("%15d\n", n);
//
//    return 0;
//}


//
//#include <stdio.h>
//
//int main()
//{
//    int arr[12] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    for (int i = 0; i < 12; i++)
//        printf("%c", arr[i]);
//    return 0;
//}
//

