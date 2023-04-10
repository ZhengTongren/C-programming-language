#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a && b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	if (a || b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//
//	
//
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int s = (a > b) ? a : b;
//	
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 9;
//	int m = (a++, b = b - a, c = c + b);
//	//		 1	   2		  11
//	printf("%d\n", m);
//
//	return 0;
//}


//typedef  unsigned int u_int;
//typedef  long long ll;
////typedef 用于 类型重命名
//
//int main()
//{
//	ll a = 10000000;
//	ll b = 200000000;
//	ll c = a + b;
//	printf("%d\n", c);
//
//	return 0;
//}


//static 修饰局部变量

//void test()
//{
//	int a = 5;
//	printf("%d ", a++);
//}

//void test()
//{
//	static int a = 5;
//	printf("%d ", a++);
//}
//int main()
//{
//	int i = 10;
//	while (i--)
//	{
//		test();
//	}
//	return 0;
//}


//static 修饰全局变量
//使一个全局变量 只能在 变量所在的源文件中 使用

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//static 修饰函数
//产生效果 与 static 作用在全局变量上的 效果相同

//extern int Add(int a, int b);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//#define N 100
//int main()
//{
//	int n = N;
//	printf("%d\n", N);
//	printf("%d\n", n);
//
//	return 0;
//}


//#define ADD(x,y) (x+y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	// int c = ( a + b );
//	printf("%d\n", c);
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//int main()
//{
//	struct Stu s1 = { "一号",20,"男" };
//	printf("%s %d %s\n", s1.name, s1.age, s1.sex);
//	return 0;
//}