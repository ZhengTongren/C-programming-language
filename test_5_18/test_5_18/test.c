#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    a %= 100;
//    b %= 100;
//    int s = a + b;
//    s %= 100;
//    printf("%d\n", s);
//    return 0;
//}


//int main()
//{
//	float a = 0.0f;
//	scanf("%f", &a);
//	printf("%d\n", (int)a % 10);
//	return 0;
//}


//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	long long t = n * 31560000;
//	printf("%lld\n", t);
//	return 0;
//}


//int main()
//{
//	int s = 0;
//	scanf("%d", &s);
//	int h = s / 3600;
//	int m = s % 3600 / 60;
//	s = s - h * 3600 - m * 60;
//	printf("%d %d %d\n", h, m, s);
//	return 0;
//}


//int main()
//{
//	int w = 0;
//	int h = 0;
//	scanf("%d %d", &w, &h);
//	float b = w * 10000.0 / (h * h);
//	printf("%.2f\n", b);
//	return 0;
//}


//#include<math.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	float l = a + b + c;
//	float d = l / 2;
//	float s = sqrt(d * (d - a) * (d - b) * (d - c));
//	printf("circumference=%.2f area=%.2f", l, s);
//	return 0;
//}


//int main()
//{
//	double r = 0;
//	scanf("%lf", &r);
//	double v = 4.0 / 3 * 3.1415926 * r * r * r;
//	printf("%.3f\n", v);
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();
//		printf("%c\n", ch + 32);
//	}
//	return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    long long a = 1 << n;
//    printf("%lld\n", a);
//    return 0;
//}


//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	while (scanf("%d %d %d", &n, &h, &m) == 3)
//	{
//		if (m % h)
//			n = n - m / h - 1;
//		else
//			n = n - m / h;
//		printf("%d\n", n);
//	}
//	return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%x %o", &a, &b);
//    printf("%d\n", a + b);
//    return 0;
//}


//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//int main()
//{
//	float w = 0.0f;
//	float h = 0.0f;
//	scanf("%f %f", &w, &h);
//	float b = w / (h * h);
//	if (b >= 18.5 && b <= 23.9)
//		printf("Normal\n");
//	else
//		printf("Abnormal\n");
//	return 0;
//}


//int main()
//{
//	float p = 0.0f;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf("%f %d %d %d", &p, &m, &d, &flag);
//	if (m == 11 & d == 11)
//		p *= 0.7;
//	else if (m == 12 && d == 12)
//		p *= 0.8;
//	if (flag == 1)
//		p -= 50;
//	if (p > 0)
//		printf("%.2f\n", p);
//	else
//		printf("0.00\n");
//	return 0;
//}


//int Lily_Num(int i)
//{
//	int j = 0;
//	int sum = 0;
//	for (j = 10; j <= 10000; j *= 10)
//		sum += (i / j) * (i % j);
//	if (i == sum)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int flag = Lily_Num(i);
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//void bubble_sort(int arr[], int n)
//{
//    int i = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    bubble_sort(arr, n);
//    for (i = 0; i < 5; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}


//int main()
//{
//    char ch[200] = { 0 };
//    int c1 = 0;
//    int c2 = 0;
//    scanf("%s", ch);
//    int i = 0;
//    while (ch[i])
//    {
//        if (ch[i] == 'A')
//            c1++;
//        else if (ch[i] == 'B')
//            c2++;
//        i++;
//    }
//    if (c1 > c2)
//        printf("A\n");
//    else if (c1 < c2)
//        printf("B\n");
//    else
//        printf("E\n");
//    return 0;
//}


//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		if (n >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//		a = b;
//	if (a < c)
//		a = c;
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		getchar();
//		if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
//			printf("Vowel\n");
//		else
//			printf("Consonant\n");
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		getchar();
//		if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);
//		else if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) == 2)
//	{
//		if (a > b)
//			printf("%d>%d\n", a, b);
//		else if (a < b)
//			printf("%d<%d\n", a, b);
//		else
//			printf("%d=%d\n", a, b);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		if (n > 0)
//			printf("1\n");
//		else if (n == 0)
//			printf("0.5\n");
//		else
//			printf("0\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//				printf("Equilateral triangle!\n");
//			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//				printf("Isosceles triangle!\n");
//			else
//				printf("Ordinary triangle!\n");
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}


//#include<math.h>
//
//int main()
//{
//	float a = 0.0f;
//	float b = 0.0f;
//	float c = 0.0f;
//	while (scanf("%f %f %f", &a, &b, &c) == 3)
//	{
//		if (a == 0)
//			printf("Not quadratic equation\n");
//		else
//		{
//			float d = b * b - 4 * a * c;
//			if (d == 0)
//			{
//				if (b == 0)
//					printf("x1=x2=0.00\n");
//				else
//					printf("x1=x2=%.2f\n", -b / (2 * a));
//			}
//			else if (d > 0)
//			{
//				float x2 = (-b + sqrt(d)) / (2 * a);
//				float x1 = (-b - sqrt(d)) / (2 * a);
//				printf("x1=%.2f;x2=%.2f\n", x1, x2);
//			}
//			else
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", (-b) / (2 * a), sqrt(-d) / (2 * a), (-b) / (2 * a), sqrt(-d) / (2 * a));
//		}
//	}
//	return 0;
//}