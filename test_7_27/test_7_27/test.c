#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


//void Print(int (*p)[5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//
//	Print(arr, 3, 5);
//	return 0;
//}


//void test1(int arr[5], int n)
//{
//
//}
//
//void test2(int* ps, int n)
//{
//
//}
//
//int main()
//{
//	int arr[5] = { 0 };
//	test1(arr, 5);
//	test2(arr, 5);
//
//
//	return 0;
//}
//



//数组传参，形参部分 可以是数组，也可以是 指针
// 二维数组 行可以省略，列不可以省略
//void test3(int arr[3][5], int r, int c)
//{
//
//}
//void test4(int(*p)[5], int r, int c)
//{
//
//}
//
//
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	test3(arr, 3, 5);
//	test4(arr, 3, 5);
//	return 0;
//}

//void test(int* arr, int r, int c);//error
//
//void test(int(*p)[5], int r, int c)
//{
//}


//void test(int (*p)[5], int r, int c)//int (*p)[5] -- 数组指针， 一行有5个元素
//{ }
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr, 3, 5);//arr 是数组首元素的地址 —— 二维数组中第一行的地址
//	// 数组指针
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int (*pf)(int, int) = &Add;
//
//	//int ret = (*pf)(3, 5);
//
//	//printf("%d ", ret);
//	return 0;
//}
//
//
////int arr[10] - 类型: int [10]
//
//void test(char* pc, int arr[10])
//{
//
//}
//
//int main()
//{
//	void (*pc)(char*, int [10]) = &test;
//	void (*pf)(char*, int*) = &test;
//	//void (*)(char*, int*) = &test;//函数指针的类型
//
//	return 0;
//}


//int Add(int a, int b)
//{
//	return a + b;
//}

//int main()
//{
//	int (*pf)(int ,int) = &Add;// pf 存放 Add函数的地址
//
//	int r = Add(3, 5);
//	printf("%d\n", r);
//	
//	int m = (*pf)(4, 5);
//	printf("%d\n", m);
//	return 0;
//}


//int Add(int a, int b)
//{
//	return a + b;
//}
//
//
//int main()
//{
//	int (*pf)(int, int) = Add;// pf 相当于 Add
//
//	int r = Add(3, 5);
//	printf("%d\n", r);
//
//	int m = (pf)(4, 5);
//	printf("%d\n", m);
//	return 0;
//}


