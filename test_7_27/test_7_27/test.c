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



//���鴫�Σ��ββ��� ���������飬Ҳ������ ָ��
// ��ά���� �п���ʡ�ԣ��в�����ʡ��
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


//void test(int (*p)[5], int r, int c)//int (*p)[5] -- ����ָ�룬 һ����5��Ԫ��
//{ }
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr, 3, 5);//arr ��������Ԫ�صĵ�ַ ���� ��ά�����е�һ�еĵ�ַ
//	// ����ָ��
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
////int arr[10] - ����: int [10]
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
//	//void (*)(char*, int*) = &test;//����ָ�������
//
//	return 0;
//}


//int Add(int a, int b)
//{
//	return a + b;
//}

//int main()
//{
//	int (*pf)(int ,int) = &Add;// pf ��� Add�����ĵ�ַ
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
//	int (*pf)(int, int) = Add;// pf �൱�� Add
//
//	int r = Add(3, 5);
//	printf("%d\n", r);
//
//	int m = (pf)(4, 5);
//	printf("%d\n", m);
//	return 0;
//}


