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


void reserve(int n)
{
	
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	//int ret = reserve(n);
	reserve(n);
	//printf("%d\n", ret);
	return 0;
}