#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void fun2(int n, int n2)
//{
//	if (n)
//	{
//		printf("%c", n + 'a');
//		if (n2 == 8)
//			printf("Y");
//		else if (n2 == 4)
//			printf("W");
//		else if (n2 % 4 == 3)
//			printf("Q");
//		else if (n2 % 4 == 2)
//			printf("B");
//		else if (n2 %4 == 1)
//			printf("S");
//	}
//}
//
//void fun(int arr[], int n)
//{
//	for (int i = n; i >= 0; i--)
//	{
//		fun2(arr[i], i);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[9] = { 0 };
//	int i = 0;
//	for (i = 0;; i++)
//	{
//		arr[i] = n % 10;
//		n /= 10;
//		if (!n)
//			break;
//	}
//	fun(arr, i);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d/%d", &a, &b);
//
//	int tmp = a > b ? a : b;
//	int tmp2 = a + b - tmp;
//	int i = 1;
//
//	while (i)
//	{
//		if (i * tmp2 % tmp == 0)
//		{
//			tmp = i * tmp2;
//			break;
//		}
//		i++;
//	}
//
//	tmp2 = a * b / tmp;
//	printf("%d/%d\n", a / tmp2, b / tmp2);
//	return 0;
//}


//void fun2(int n)
//{
//	switch (n)
//	{
//	case 0:
//		printf("ling");
//		break;
//	case 1:
//		printf("yi");
//		break;
//	case 2:
//		printf("er");
//		break;
//	case 3:
//		printf("san");
//		break;
//	case 4:
//		printf("si");
//		break;
//	case 5:
//		printf("wu");
//		break;
//	case 6:
//		printf("liu");
//		break;
//	case 7:
//		printf("qi");
//		break;
//	case 8:
//		printf("ba");
//		break;
//	case 9:
//		printf("jiu");
//		break;
//	}
//}
//
//void fun1(int c, int arr[], int n)
//{
//	if (c == -1)
//		printf("fu ");
//	/*while (n)
//	{
//		fun2(n % 10);
//		n /= 10;
//		if (n)
//			printf(" ");
//	}*/
//	for (int i = n; i >= 0; i--)
//	{
//		fun2(arr[i]);
//		if (i)
//			printf(" ");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int c = 0;
//	if (n < 0)
//	{
//		c = -1;
//		n = -n;
//	}
//	int arr[20] = { 0 };
//	int i = 0;
//	while (n)
//	{
//		arr[i] = n % 10;
//		n /= 10;
//		if (n)
//			i++;
//		//0 0 6
//		//60 6 0
//		//1 2
//	}
//	fun1(c, arr,i);
//	return 0;
//}


//int main()
//{
//	char ch[100] = { 0 };
//	int i = 0;
//	int tmp = 0;
//	/*while (ch[i]!='.')
//	{
//		scanf("%c", &ch[i]);
//		i++;
//		tmp++;
//		if (ch[i] == ' ')
//		{
//			printf("%d ", tmp-1);
//			tmp = 0;
//		}
//		else if (ch[i] == '.')
//		{
//			printf("%d\n", tmp - 1);
//		}
//	}*/
//
//	scanf("%[^\n]s", ch);
//	//while (ch[i]!='.')
//	//{
//	//	//scanf("%c", &ch[i]);
//	//	
//	//	if (ch[i] == ' ')
//	//	{
//	//		printf("%d ", tmp);
//	//		tmp = 0;
//	//	}
//	//	else if (ch[i] == '.')
//	//	{
//	//		printf("%d\n", tmp - 1);
//	//	}
//	//	i++;
//	//	tmp++;
//	//}
//
//	int len = strlen(ch);
//	for (i = 0; i <= len; i++)
//	{
//		if (ch[i] != ' ' && ch[i] != '.')
//		{
//			tmp++;
//		}
//		else
//		{
//			printf("%d ", tmp);
//			tmp = 0;
//		}
//	}
//	return 0;
//}


