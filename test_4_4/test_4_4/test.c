#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int i;
//	scanf("%d", &i);
//	if (i >= 90 && i <= 100)
//		printf("Perfect\n");
//
//	return 0;
//}

//int main()
//{
//	/*int i,j;
//	scanf("%d\n%d", &i,&j);
//	if (i >= 60)
//		printf("Pass\n");
//	else
//		printf("Fail\n");
//	if (j>= 60)
//		printf("Pass\n");
//	else
//		printf("Fail\n");*/
//
//	int ch;
//	while (scanf("%d",&ch) != EOF) //说明我还是没懂 getchar、putchar
//	{
//		//getchar();
//		
//		if (ch >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch;
//	while (scanf("%d", &ch) != EOF) //此行代码 为 多组输入最经常使用
//	{
//		if (ch % 2 == 1)
//			printf("Odd\n");
//		else
//			printf("Even\n");
//	}
//	return 0;
//}

//int max(int i, int j)
//{
//	if (i >= j)
//		return i;
//	else
//		return j;
//}
//int main()
//{
//	int i, j, k;
//	scanf("%d%d%d", &i, &j, &k);
//	int m;
//	m = max(i, j);
//	m = max(m, k);
//	printf("%d\n", m);//变量 不能与 函数同名
//	return 0;
//}

//int main()
//{
//	char ch;
//	while (scanf("%c",&ch) != EOF)
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
//	char ch;
//	while (scanf("%c", &ch) != EOF)
//	{
//		getchar();
//		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//	}
//	return 0;
//}

//int main()
//{
//	char ch;
//	while (scanf("%c", &ch) != EOF)
//	{
//		getchar();
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			putchar(ch + 32);
//			printf("\n");
//		}
//		else if (ch >= 'a' && ch <= 'z')
//		{
//			putchar(ch - 32);
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		if (a > b)
//			printf("%d>%d\n", a, b);
//		else if (a == b)
//			printf("%d=%d\n", a, b);
//		else if (a < b)
//			printf("%d<%d\n", a, b);
//	}
//	return 0;
//}

//int main()
//{
//	double ch;
//	while (scanf("%lf", &ch) != EOF)
//	{
//		if (ch > 0)
//			printf("1\n");
//		else if (ch == 0)
//			printf("0.5\n");
//		else if (ch < 0)
//			printf("0\n");
//	}
//	return 0;
//}

//int judge_tri(double i, double j, double k)
//{
//	if (i + j > k)
//	{
//		if (i + k > j)
//		{
//			if (j + k > i)
//			{
//				if (i == j && j == k)
//					return 1;
//				else if (i == j || j == k || i == k)
//					return 0;
//				else
//					return 2;
//			}
//			else
//				return -1;
//		}
//		else
//			return -1;
//	}
//	else
//		return -1;
//}

//int judge_tri(double i, double j, double k)
//{
//	if (i + j > k && i + k > j && j + k > i)
//	{
//		if (i == j && j == k)
//			return 1;
//		else if (i == j || i == k || j == k)
//			return 0;
//		else
//			return 2;
//	}
//	else
//		return -1;
//}
//int main()
//{
//	double i, j, k;
//	while (scanf("%lf%lf%lf", &i, &j, &k) != EOF)
//	{
//		int m = judge_tri(i, j, k);
//		if (m == 1)
//			printf("Equilateral triangle!\n");
//		else if (m == 0)
//			printf("Isosceles triangle!\n");
//		else if (m == 2)
//			printf("Ordinary triangle!\n");
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}

//int main()
//{
//	double wei, hei;
//	while (scanf("%lf%lf", &wei, &hei) != EOF)
//	{
//		getchar();
//		double BMI = wei / (hei * hei) * 10000;
//		if (BMI < 18.5)
//			printf("Underweight\n");
//		else if (BMI >= 18.5 && BMI <= 23.9)
//			printf("Normal\n");
//		else if (BMI > 23.9 && BMI <= 27.9)
//			printf("Overweight\n");
//		else
//			printf("Obese\n");
//	}
//	return 0;
//}

//#include<math.h>
//int f(double a,double b,double c,double* p1, double* p2)
//{
//	if (a == 0)
//		printf("Not quadratic equation\n");
//	else
//	{
//		int d = b * b - 4 * a * c;
//		if (d == 0)
//		{
//			a* (*p1)* (*p1) + b * (*p1) + c == 0;
//			(*p2) = (*p1);
//		}
//		else if (d > 0)
//		{
//			a* (*p1)* (*p1) + b * (*p1) + c == 0;
//			a* (*p2)* (*p2) + b * (*p2) + c == 0;
//			if ((*p1) > (*p2))
//			{
//				int tmp = (*p1);
//				(*p1) = (*p2);
//				(*p2) = tmp;
//			}
//		}
//		else if (d < 0)
//		{
//			int s = (-b) / (2 * a);
//			int x = aqrt(-d) / (2 * a);
//			if (x > 0)
//			{
//				//(*p1) = s - x*i;
//
//			}
//		}
//	}
//
//	//a* x1* x1 + b * x1 + c == 0;
//	//a* x2* x2 + b * x2 + c == 0;
//
//}
//int main()
//{
//	double a, b, c, x1, x2;
//	double *p1 = &x1, *p2 = &x2;
//	while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
//	{
//		f(a, b, c, p1, p2);
//		
//		/*if (a == 0)
//			printf("Not quadratic equation\n");
//		else
//		{
//			int d = b * b - 4 * a * c;
//			if (d == 0)
//			{
//				int s = (-b) / (2 * a);
//				int x = 
//			}
//		}*/
//		printf("%.2f %.2f\n", x1, x2);
//	}
//	
//	return 0;
//}

#include<math.h>
int main()
{
	double a=0, b=0, c=0,x1=0,x2=0;
	while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
	{
		if (a == 0)
			printf("Not quadratic equation\n");
		else
		{
			double d = b * b - 4 * a * c;
			double mp = (-b) + sqrt(d);
			if (d == 0)
			{
				if (mp == 0)
					printf("x1=x2=0.00\n");
				else
				printf("x1=x2=%.2f\n", (-b)/ (2.0 * a));
			}
			else if (d > 0)
			{
				x1 = ((-b) - sqrt(d)) / (2.0 * a);
				x2 = ((-b) + sqrt(d)) / (2.0 * a);
				if (x1 > x2)
				{
					double tmp = x1;
					x1 = x2;
					x2 = x1;
				}
				printf("x1=%.2f;x2=%.2f\n", x1, x2);
			}
			else
			{
				double shi = (-b) / (2.0 * a);
				double xv = sqrt(-d) / (2.0 * a);
				if (xv < 0)
					xv = -xv;//防止丢失精度

					printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", shi, xv, shi, xv);
			}
		}
	}
	return 0;
}