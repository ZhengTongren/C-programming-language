#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 写一个函数，每调用一次这个函数，就会将 num 的值增加1

//int test(int ret)
//{
//	return ret + 1;
//}
//
//int main()
//{
//	int ret = 0;
//	ret = test(ret);
//	ret = test(ret);
//	printf("%d\n", ret);
//	return 0;
//}
//
//int test(int ret)
//{
//	return ret + 1;
//}

//void test(int* n)
//{
//	(*n)++;
//}
//int main()
//{
//	int ret = 0;
//	test(&ret);
//	test(&ret);
//	printf("%d\n", ret);
//	return 0;
//}

#include<string.h>

//int main()
//{
//	char arr[] = "It is my fault";
//	printf("%d", strlen(arr));
//	return 0;
//}

//int main()
//{
//	char arr[] = "It is my fault";
//	//printf("%d", strlen(arr));
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{/*
//	char ch = "abcdef";*/
//	int ch = 13;
//	printf("%d ", printf("%d ", printf("%d ", ch)));
//	return 0;
//}


//int main()
//{
//
//	printf("%d ",printf("%d ",43));
//	return 0;
//}

#include"Add.h"

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}

//void print(a)
//{
//	if (a > 9)
//		print(a / 10);
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度

//int my_strlen(char* ch)
//{
//	int a = 0;
//	while (*(ch + a) != '\0')
//	{
//		a++;
//	}
//	return a;
//}
//int main()
//{
//	char ch[30] = { 0 };
//	scanf("%s", ch);
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}

//int my_strlen(char* ch)
//{
//	//abcdef
//	//
//	if (*ch != '\0')
//		return 1 + my_strlen(ch + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char ch[30] = { 0 };
//	scanf("%s", ch);
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}

//int my_pow(int n)
//{
//	//6! = 6* 5!
//	if (n > 0)
//		return n * my_pow(n - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int k = my_pow(n);
//	printf("%d\n", k);
//	return 0;
//}

//int Fib(int n)
//{
//	if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int k = Fib(n);
//	printf("%d", k);
//	return 0;
//}


//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int k = Fib(n);
//	printf("%d\n", k);
//	return 0;
//}


