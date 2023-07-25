#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>



//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//
//	*pc = 'c';
//	printf("%c\n", ch);
//	return 0;
//}

//
//int main()
//{
//	const char* pc = "abcedf";
//
//	printf("%s\n", pc);
//	printf("%c\n", *pc);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//
//	//str1 str2 为两个不同的字符数组
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	// "hello bit." 为一个常量字符串
//	// str1 和 str2 都指向这个字符串
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}
//


//
//// 指针数组模拟实现二维数组
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* arr[3] = {arr1, arr2, arr3};
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



// 数组名 通常表示首元素的地址
// 两个例外：
// 1. sizeof(数组名) ，计算整个数组的大小
// 2. &数组名 —— 取的是 数组的地址
//
//int main()
//{
//	int arr[10];
//	
//	printf("%p\n", arr); // int*
//	//arr 表示首元素的地址
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);// int*
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);//int(*)[10]
//	printf("%p\n", &arr + 1);
//	
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//数组指针//类型： int(*)[10]
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//*(&arr) --> arr
//
//	for (int i = 0; i < 10; i++)
//	{
//		//printf("%d ",  * ((*p) + i));
//		printf("%d ", (*p)[i]);
//
//	}
//
//	return 0;
//}
//
//



