#define _CRT_SECURE_NO_WARNINGS 1


//#define INT_PTR int*
//
//INT_PTR a, b;
//
//int* a, b;



//
//#include <math.h>
//#include <stdio.h>
//
//int* printNumbers(int n, int* returnSize)
//{
//    *returnSize = pow(10, n) - 1;
//    int* arr = (int*)malloc(sizeof(int) * (*returnSize));
//
//    for (int i = 1; i <= *returnSize; i++)
//    {
//        arr[i - 1] = i;
//    }
//    return arr;
//}


//#include <stdio.h>
//
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int date = 0;
//    scanf("%d %d %d", &year, &month, &date);
//
//    int days = 0;
//    for (int i = 1; i < month; i++)
//    {
//        switch (i)
//        {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            days += 31;
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            days += 30;
//            break;
//        case 2:
//            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//                days += 29;
//            else
//                days += 28;
//            break;
//        }
//    }
//    days += date;
//    printf("%d", days);
//    return 0;
//}


