#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>

//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int s = Add(a, b);
//    printf("%d\n", s);
//    return 0;
//}

#include<stdio.h>

void Swap1(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	Swap1(a, b);
	printf("%d %d\n", a, b);
	Swap2(&a, &b);
	printf("%d %d\n", a, b);

	return 0;
}

