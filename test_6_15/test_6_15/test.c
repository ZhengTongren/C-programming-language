#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int Min_com(int x, int y)
//{
//	int tmp1 = x > y ? x : y;
//	int tmp2 = x + y - tmp1;
//	for (int i = 1;; i++)
//	{
//		if (i * tmp2 % tmp1 == 0)
//		{
//			tmp1 = i * tmp2;
//			break;
//		}
//	}
//	return x * y / tmp1;
//}
//
//int main()
//{
//	int a1 = 0;
//	int b1 = 0;
//	int a2 = 0;
//	int b2 = 0;
//	scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);
//	int a = 0;
//	int b = 0;
//	a = a1 * b2 + a2 * b1;
//	b = b1 * b2;
//
//	int ret = Min_com(a, b);
//	a /= ret;
//	b /= ret;
//
//	if (b == 1)
//		printf("%d\n", a);
//	else
//		printf("%d/%d\n", a, b);
//	return 0;
//}



//输入在第一行给出正整数N（≤10）；
//随后N行，每行按照格式姓名 生日 性别 固话 手机给出一条记录。
//其中姓名是不超过10个字符、不包含空格的非空字符串；
//生日按yyyy / mm / dd的格式给出年月日；
//性别用M表示“男”、F表示“女”；
//固话和手机均为不超过15位的连续数字，前面有可能出现 +
//struct Address
//{
//	char name[10];
//	char birth[11];
//	char sex;
//	char land[17];
//	char num[17];
//};
//
////void Print(int num1, struct Address add[], int num2, int arr[])
////{
////
////}
//
//
////姓名 固话 手机 性别 生日
//void Print(int num1, struct Address add[], int num2)
//{
//	if (num2 < num1)
//	{
//		printf("%s %s %s %c %s\n", add[num2].name, add[num2].land, add[num2].num, add[num2].sex, add[num2].birth);
//	}
//	else
//		printf("Not Found\n");
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct Address ad1[10] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %s %c %s %s", &ad1[i].name, &ad1[i].birth, &ad1[i].sex, &ad1[i].land, &ad1[i].num);
//	}
//
//	//最后一行给出正整数K，并且随后给出K个整数，
//	//表示要查询的记录编号（从0到N−1顺序编号）。数字间以空格分隔
//	int k = 0;
//	scanf("%d", &k);
//	int arr[10] = { 0 };
//	for (int i = 0; i < k; i++)
//		scanf("%d", &arr[i]);
//	
//	//Print(n, ad1, k, arr);
//	for (int i = 0; i < k; i++)
//	{
//		Print(n,ad1,arr[i]);
//	}
//	return 0;
//}


