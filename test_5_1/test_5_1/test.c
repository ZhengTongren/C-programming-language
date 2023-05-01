#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d", strlen(arr));
//	return 0;
//}

//#include<stdio.h>

//int main()
//{
//	int arr[] = { 0,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	return 0;
//}


//#include<stdio.h>
//
//int Add(int x, int y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}

#include<stdio.h>

#include"Add.h"

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}

