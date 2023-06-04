#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//
//	return 0;
//}


//int main()
//{
//	int h1 = 0;
//	int m1 = 0;
//	scanf("%2d%2d", &h1, &m1);
//	m1 += h1 * 60;
//	int m2 = 0;
//	scanf("%d", &m2);
//	m1 += m2;
//	h1 = m2 / 60 % 24;
//	m2 %= 60;
//	printf("%2d%2d\n", h1, m1);
//	return 0;
//}


//int main()
//{
//	int h1 = 0;
//	int m1 = 0;
//	scanf("%2d%2d", &h1, &m1);
//	int m2 = 0;
//	scanf("%d", &m2);
//
//	m1 += m2;
//	if (m1 >= 60)
//	{
//		h1 += m1 / 60;
//		m1 %= 60;
//	}
//	else if(m1 < 0)
//	{
//		for (m1; m1 >= 0 && m1 < 60;)
//		{
//			h1 -= 1;
//			m1 += 60;
//		}
//		if (h1 < 0)
//			h1 += 24;
//	}
//	printf("%2d%2d\n", h1, m1);
//	return 0;
//}


//int main()
//{
//	/*int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//	scanf("%d%d%d", &n1, &n2, &n3);*/
//	int arr[3] = { 0 };
//	scanf("%1d%1d%1d", &arr[2], &arr[1], &arr[0]);
//	for (int i = 0; i < 3; i++)
//	{
//		if (arr[i])
//			printf("%d", arr[i]);
//	}
//
//	return 0;
//}


//void reserve(int n)
//{
//	if (n > 0)
//	{
//		printf("%")
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//int ret = reserve(n);
//	reserve(n);
//	//printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int n = 18;
//	printf("%x", n);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	//for (i = 0; i <= 153; i++)
//	scanf("%d", &i);
//	printf("%x ", i);
//	return 0;
//}


//int main()
//{
//	printf("------------------------------------\n");
//	printf("Province      Area(km2)   Pop.(10K)\n");
//	printf("------------------------------------\n");
//	printf("Anhui         139600.00   6461.00\n");
//	printf("Beijing        16410.54   1180.70\n");
//	printf("Chongqing      82400.00   3144.23\n");
//	printf("Shanghai        6340.50   1360.26\n");
//	printf("Zhejiang      101800.00   4894.00\n");
//	printf("------------------------------------\n");
//
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	char ch = 0;
//	float a1 = 0.0f;
//	float a2 = 0.0f;
//	scanf("%f %d %c %f", &a1, &a, &ch, &a2);
//	printf("%c %d %.2f %.2f\n", ch, a, a1, a2);
//	return 0;
//}


//int main()
//{
//	int h = 0;
//	int m = 0;
//	scanf("%d:%d", &h, &m);
//	if (h >= 12)
//	{
//		h %= 12;
//		printf("%d:%d PM\n", h, m);
//	}
//	else
//	{
//		printf("%d:%d AM\n", h, m);
//	}
//	return 0;
//}


//int main()
//{
//	int v = 0;
//	scanf("%d", &v);
//	if (v > 60)
//		printf("Speed: %d - Speeding\n", v);
//	else
//		printf("Speed: %d - OK\n", v);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a == b)
//		printf("C\n");
//	else if (a == c)
//		printf("B\n");
//	else
//		printf("A\n");
//
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	long long h = 0;
//	scanf("%d %lld", &y, &h);
//	double p = 0;
//
//	if (y >= 5)
//	{
//		if (h > 40)
//			p = 2000.0 + (h - 40) * 50 * 1.5;
//		else
//			p = h * 50.0;
//	}
//	else
//	{
//		if (h > 40)
//			p = 1200.0 + (h - 40) * 30 * 1.5;
//		else
//			p = h * 30.0;
//	}
//	printf("%.2f\n", p);
//	return 0;
//}


//typedef struct Stu
//{
//    char name[20];
//    int age;
//    char sex[5];
//} Stu;
////typedef 把 struct Stu 命名为 Stu
//
//int main()
//{
//    struct Stu s1;
//    Stu s2;//可以直接用 Stu 创建结构体变量
//    return 0;
//}


//int main()
//{
//	return 0;
//}




//{
//	//20 10 5 2 1
//	if (n / 2)
//		return n + fun1(n / 2);
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 20;
//	//scanf("%d", &n);
//	int ret = fun1(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法1
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//
//	return 0;
//}


