#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	printf("to be a engineer\n");
//	return 0;
//}
//main函数是程序的入口
//一个程序有且只有一个main函数

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}




//#define N 200
//int main()
//{
//	0;
//
//	return 0;
//}

//int a = 10;
//
//int main()
//{
//	int a = 0;
//
//	printf("%d\n", a);
//	return 0;
//}
//当局部变量与全局变量冲突时，局部变量优先

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = Add(num1, num2);
//
//	printf("%d\n", sum);
//	return 0;
//}

//int a = 100;
//
//int main()
//{
//	/*{
//		int a = 20;
//		printf("%d\n", a);
//	}*/
//	//printf("%d\n", a);
//	//局部变量的作用域是局部变量所在的局部范围
//	//局部变量的生命周期：进作用域，生命周期开始；出作用域，生命周期结束
//
//	printf("%d\n", a);
//	//全局变量的作用域是整个工程
//	//全局变量的生命周期是整个程序的生命周期
//
//	return 0;
//}


//#define a 200
//int main()
//{
//	0;
//	1;
//	//const int a = 10;
//	//a = 10;
//	//const 修饰的变量具有常属性，不可被修改；本质上是个 变量
//	printf("%d\n", a);
//	//int arr[a];
//	
//
//
//	return 0;
//}


//enum Color
//{
//	//默认从0开始
//	red=8,
//	green=20,
//	blue=33
//};
//
//int main()
//{
//	//red = 10;
//	//枚举类型中的变量不可直接修改
//	printf("%d\n", red);
//	printf("%d\n", green);
//	printf("%d\n", blue);
//	return 0;
//}

#include<string.h>
//
//int main()
//{
//	char arr1[] = "abcd";
//	//字符串的末尾隐藏了'\0','\0'是字符串结束的标志
//	char arr2[] = { 'a','b','c','d','\0'};
//
//	int a = strlen(arr1);
//	//计算字符串长度时，'\0'不记在内
//	int b = strlen(arr2);
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//


//int main()
//{
//	//printf("(are you of \?\?)\n");
//	//'\?'可以转义'？',使编译器不把它解析为三字母词
//	
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//
//	//printf("D:\test\test.c\n");
//	//printf("D:\\test\\test.c\n");
//
//	//printf("\a\n");//'\a'蜂鸣
//
//	//printf("a\bcd\n");//'\b'为退格符
//	//printf("a\\bcd\n");
//
//	//printf("abcdrgh\n");
//	//printf("abcde\rghll\n");
//	//'\r'为回车，回到第一位，然后依次覆盖
//	//printf("abcd\\rgh\n");
//
//	//printf("\123\n"); // \ddd ddd表示1~3个八进制数字
//	//printf("\xad\n");// \xdd dd表示1~2个十六进制数字
//
//
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	// c:\test\628\test.c "\628"部分为两个字符'\62' '8' 
//	//8进制中不能出现8
//	return 0;
//}

//c语言注释风格
/*
* 
* 
* 
*/
//缺点是 不支持嵌套

//为C++注释风格

//注释的本来作用是 用文字解释一段代码的功能和含义
//一段代码不需要了，可以删掉，也可以通过注释让其失去作用


//int main()
//{
//	int i = 0;
//	while (i<50000)
//	{
//		printf("努力学习:>  ");
//		printf("%d\n", i++);
//	}
//	if (i == 50000)
//		printf("将获得阶段性胜利！\n");
//	else
//		printf("sorry!\n");
//	return 0;
//}


