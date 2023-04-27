#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1
//int Fib(int n)
//{
//	if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	else
//		return 1;
//}
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>=3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//


//int fun(int n, int k)
//{
//	//n^k = n* n^(k-1)
//	if (k > 1)
//		return n * fun(n, k - 1);
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = fun(n, k);
//
//	printf("%d\n", ret);
//	return 0;
//}
//


//int DigitSum(int n)
//{
//	//1234
//	//4 + 1234 %10
//	if (n > 9)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strlen(char* ch)
//{
//	int a = 0;
//	while (*ch != '\0')
//	{
//		a += 1;
//		ch += 1;
//	}
//	return a;
//}

//void reverse_string(char* ch)
//{
//	if (*ch != '\0')
//		reverse_string(ch + 1);
//	printf("%c", *ch);
//}
//
//int main()
//{
//	char ch[200] = { 0 };//数组大小最好进行初始化，否则容易出现数组越界的情况
// //char ch[] = "abcdef";
// //char ch[] = { 0 }; 两种情况不相同 
//	scanf("%s", ch);
//
//	reverse_string(ch);
//
//	//printf("%s\n", ch);
//	return 0;
//}


//int main()
//{
//	printf("ab\rcdef");
//	return 0;
//}


//int my_strlen(char* ch)
//{
//	//abcdef
//	if (*ch != '\0')
//	{
//		return 1+my_strlen(ch+1);
//	}
//	else
//		return 0;
//}

//int my_strlen(char* ch)
//{
//	//abcdef
//	int count = 0;
//	while (*ch != '\0')
//	{
//		count++;
//		ch += 1;
//	}
//	return count;
//}
//
//int main()
//{
//	char ch[200] = { 0 };
//	scanf("%s", ch);
//	int ret = my_strlen(ch);
//	printf("%d\n", ret);
//	return 0;
//}


//int fun(int n)
//{
//	//6! = 6* 5!
//	if (n > 1)
//		return n * fun(n - 1);
//	else
//		return 1;
//}

//int fun(int n)
//{
//	//6! = 6* 5!
//	int sum = 1;
//	while (n)
//	{
//		sum *= n;
//		n--;
//	}
//	return sum;
//}

//int fun(int n)
//{
//	//6! = 6* 5!
//	if (n > 1)
//		return n * fun(n - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fun(n);
//
//	printf("%d\n", ret);
//	return 0;
//}

void print(int n)
{
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);

	return 0;
}