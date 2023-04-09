#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int k = n;
//	while (k)
//	{
//		k / 10;
//		i++;
//	}
//	int j = 1;
//	while (i>1)
//	{
//		j *= 10;
//		i--;
//	}
//	i
//	for (j; j > 1; j /= 10)
//	{
//		int x1 = n / j;
//		if()
//	}
//	/*while (k)
//	{
//		i = k % 10;
//		if (i % 2 == 0)
//			n -= i;
//		else
//			n = n - i + 1;
//
//		k = k / 10;
//		
//	}*/
//
//	//2222
//	//0 0 0 0
//	return 0
//}

#include<stdio.h>
//long long fun1(long long n)
//{
//	int b = n % 10;
//	int c = b % 2;
//	n /= 10;
//	if (n)
//	{
//		return 10 * fun1(n) + c;
//	}
//	/*int s1 = n % 10;
//	long s = n / 10;*/
//	return c;
//}
//
//int main()
//{
//	long long n;
//	scanf("%ld", &n);
//	long long n2 = fun1(n);
//	printf("%ld", n2);
//	return 0;
//}

//int main()
//{
//	int n, arr[9] = { 0 }, count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		int m = n % 10;
//		if (m % 2)
//			arr[count++] = 1;
//		else
//			arr[count++] = 0;
//		n /= 10;
//	}
//	int result = 0;
//	for (int i = count - 1; i >= 0; i--)
//	{
//		result = result * 10 + arr[i];
//		//printf("%d",arr[i]);
//	}
//	printf("%d", result);
//	return 0;
//}


//extern int g_val;
//
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}


//int main()
//{
//	const int a = 3;
//	//a = 10;
//	printf("%d\n", a);
//
//	return 0;
//}


//enum color
//{	
//	red,
//	green,
//	blue
//
//};
//int main()
//{
//	printf("%d\n", red);
//	printf("%d\n", green);
//	printf("%d\n", blue);
//	return 0;
//}

#include<string.h>
//
//int main()
//{
//	char arr[] = {'a','b','c','d','e','f','\0'};
//	char arr2[] = "abcdef";
//
//	int len1 = strlen(arr);
//	printf("%d\n", len1);
//	int len2 = strlen(arr2);
//	printf("%d\n", len2);
//
//	return 0;
//}


//int main()
//{
//	printf("(are you ok\?\?)");
//	return 0;
//}


//int main() 
//{
//	//printf("\a");
//	//printf("abc\bdef");
//
//	printf("ab\r");
//	return 0;
//}

