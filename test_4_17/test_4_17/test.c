#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//int main()
//{
//	int n = 10;
//	//scanf("%d", &n);
//	int sum = 0;
//	/*for (int i = 1; i <= n; i++)
//	{
//		int ret = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}*/
//	int ret = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 4; i++)
//	{
//		for (; j < 4; j++)
//			printf("hehe\n");
//	}
//	return 0;
//}
//

//int main()
//{
//	//打印1~10的阶乘之和
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//二分查找
//仅用于有序数组
#include<string.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int sz = strlen(arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] == n)
//		{
//			printf("找到了\n");
//			flag = 1;
//			break;
//		}
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//	}
//
//	if (flag == 0)
//		printf("没找到\n");
//
//	return 0;
//}


//welcome to CUPK!
//################

#include<Windows.h>
//int main()
//{
//	char arr1[] = "Welcome to CUPK!";
//	char arr2[] = "################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr2);
//	return 0;
//}
//
//	Sleep() 可以让程序运行停顿一段时间
//	system("cls") 清除屏幕打印


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:> \n");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("输入正确\n");
//			flag = 1;
//			break;
//		}
//		else
//			printf("输入错误\n");
//	}
//	if (flag == 0)
//	{
//		printf("您的电脑即将关机\n");
//		system("cls");
//		system("shutdown -s -t 100");
//	}
//
//	return 0;
//}


//
//