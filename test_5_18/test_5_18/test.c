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