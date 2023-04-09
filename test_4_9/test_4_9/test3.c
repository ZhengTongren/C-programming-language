#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
//int main()
//{
//	printf("Hello world!");
//	return 0;
//}
//
////main函数为程序的入口
////一个工程中有且只能有一个main函数

////整型 数据类型
//
//	short		//短整型
//	int			//整型
//	long		//长整型
//	long long	//更长的整型



//#include<stdio.h>
//
//int main()
//{
//	char ch = 'W';
//
//	int a = 10;
//
//	float b = 3.14;
//
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//
//	long long b = 10000000000;
//
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));

	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}