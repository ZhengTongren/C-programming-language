#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9, };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//		printf("%d ", p[i]);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (int i = 0; i < 10; i++)
//		printf("%d ", i[arr]);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}


//#include<stdio.h>
//
//int my_strlen(char ch[])
//{
//    int len = 0;
//    while (*ch)
//    {
//        len++;
//        ch++;
//    }
//    return len;
//}
//
//int main()
//{
//    char ch[] = "abcdef";
//    int len = my_strlen(ch);
//
//    printf("%d\n", len);
//    return 0;
//}


//#include<stdio.h>
//
//int my_strlen(char ch[])
//{
//    int i = 0;
//    while (*(ch + i))
//    {
//        i++;
//    }
//    return i;
//}
//
//int main()
//{
//    char ch[] = "abcdef";
//    int len = my_strlen(ch);
//    printf("%d\n", len);
//    return 0;
//}


//int my_strlen(char ch[])
//{
//    char* start = ch;
//    while (*ch)
//    {
//        ch++;
//    }
//    return ch - start;
//}
//
//int main()
//{
//    char ch[] = "abcdef";
//    int len = my_strlen(ch);
//    printf("%d\n", len);
//    return 0;
//}


//int main()
//{
//    int arr[5] = { 0 };
//    for (int* p = arr; p < &arr[5];)
//        *p++ = 1;
//
//    for (int i = 0; i < 5; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	**ppa = 100;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hello world";
//
//	char* parr[] = { arr1,arr2 };
//	for (int i = 0; i < 2; i++)
//		printf("%s\n", parr[i]);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//    int arr1[] = { 1,2,3,4,5 };
//    int arr2[] = { 2,3,4,5,6 };
//    int arr3[] = { 3,4,5,6,7 };
//
//    int* parr[] = { arr1,arr2,arr3 };
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            printf("%d ", (parr[i])[j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


