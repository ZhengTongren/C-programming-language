#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//
//typedef struct arr
//{
//	char ch1[10];
//	char ch2[10];
//	char ch3[10];
//	char ch4[10];
//	char ch5[10];
//	char ch6[10];
//	char ch7[10];
//	char ch8[10];
//	char ch9[10];
//	char ch10[10];
//}arr;

//int Compare(char ch1[], char ch2[])
//{
//	int c1 = 0;
//	int c2 = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (ch1[i])
//			c1++;
//		if (ch2[i])
//			c2++;
//	}
//	if (c1 > c2)
//		return 1;
//	else if (c2 > c1)
//		return 2;
//	else
//		return 0;
//}

int Compare(char ch1[], char ch2[])
{
	for (int i = 0; i < 10; i++)
	{
		if (ch1[i] > ch2[i])
			return 1;
		else if (ch1[i] < ch2[i])
			return 2;
	}
}

void Swap(char ch1[], char ch2[])
{
	for (int i = 0; i < 10; i++)
	{
		char tmp = ch1[i];
		ch1[i] = ch2[i];
		ch2[i] = tmp;
	}
}

void New_bubble(char ch[], int n, int k)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			int ret = Compare(&ch[j * 10], &ch[(j + 1) * 10]);
			if (ret == 1)
				Swap(&ch[j * 10], &ch[(j + 1) * 10]);
		}
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);

	
	getchar();
	char ch[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		fgets(ch + i * 10, 10, stdin);
	}

	
	New_bubble(ch, n, k);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (ch[i * 10 + j])
				printf("%c", ch[i * 10 + j]);
			
		}
	}
	return 0;
}


