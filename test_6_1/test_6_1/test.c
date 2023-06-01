#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	char ch[10001] = { 0 };
//	fgets(ch, 10000, stdin);
//	int len = strlen(ch);
//
//	int left = 0;
//	int right = len - 2;
//
//	while (left < right)
//	{
//		char tmp = ch[left];
//		ch[left] = ch[right];
//		ch[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", ch);
//
//	return 0;
//}


//int main()
//{
//	for (int i = 1; i <= 7; i++)
//	{
//		for (int j = 1; j <= 7 - i; j++)
//			printf(" ");
//		for (int j = 1; j <= 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (int i = 6; i > 0; i--)
//	{
//		for (int j = 1; j <= 7 - i; j++)
//			printf(" ");
//		for (int j = 1; j <= 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}


//int Lily(const int i)
//{
//	int sum = 0;
//	int count = 1;
//	int s = i;
//	while (s)
//	{
//		count *= 10;
//		s /= 10;
//	}
//	for (int j = 10; j < count; j *= 10)
//	{
//		sum += (i % j) * (i / j);
//	}
//	if (sum == i)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//	//int i = 153;
//		int ret = Lily(i);
//		if (ret == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int Lily(const int i)
//{
//	int j = i;
//	int g = i;
//	int count = 0;
//	while (j)
//	{
//		count++;
//		j /= 10;
//	}
//	int sum = 0;
//	for (int j = 0; j < count; j++)
//	{
//		int ret2 = 1;
//		for (int k = 0; k < count; k++)
//		{
//			ret2 *= (g % 10);
//		}
//		sum += ret2;
//		g /= 10;
//	}
//	if (sum == i)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		int ret = Lily(i);
//		if (ret == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int Sum(int n)
//{
//	int sum = 0;
//	int ret = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		ret += n;
//		sum += ret;
//		if (i < 4)
//			ret *= 10;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Sum(n);
//	printf("%d\n", sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* pb = pa;
//	printf("%p\n", pa);
//	printf("%p\n", pb);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//		*(p + i) = i;
//
//	for (int i = 0; i < 10; i++)
//		printf("%d ", *p++);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	for (int i = 0; i < 10; i++)
//		printf("%d ", i[arr]);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//
//	return 0;
//}


