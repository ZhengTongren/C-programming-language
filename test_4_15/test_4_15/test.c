#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main() 
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}
//


//int main()
//{
//	int arr[3] = { 0 };
//	//scanf("%d %d %d", &a, &b, &c);
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//


//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int a = 0;
//		for (int j = 2; j < i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				a = 1;
//				break;
//			}
//		}
//		if (a == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 400 == 0)
//			printf("%d ", i);
//		else if (i % 4 == 0 && i % 100 != 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//


//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	if (a < b) 
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	int tmp1 = a % b;
//	//int tmp2 = b % tmp1;*/
//	while (tmp1)
//	{
//		a = b;
//		b = tmp1;
//		tmp1 = a % b;
//		/*int tmp = tmp1 % tmp2;
//		tmp1 = tmp2;
//		tmp2 = tmp;*/
//	}
//	printf("%d\n", b);
//	return 0;
//}
//
//



#include<stdio.h>

//int main()
//{
//	int a = 1;
//	int b = 0;
//	switch (a)//switch�����ʽ�У�ֻ�������ͺ�ö���ͣ������Ǹ�����
//	
//	{
//	case 1:b = 30;
//	case 2:b = 16;
//	case 3:b = 44;
//	default:b = 0;
//	}
//	//������case 3��b=44 ��case 3�����û�� break����������default���
//	printf("%d\n", b);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", sizeof(p));
//	//32λ�������� ָ�����ռ�ĸ��ֽ�
//	//64λ�������� ָ�����ռ�˸��ֽ�
//	return 0;
//}


//������뻺�������ַ�
//int main()
//{
//	char password[20] = { 0 };
//	scanf("%s", password);
//	printf("please recheck your password(Y/N):> ");
//	
//
//	//
//	while (getchar() != '\n')
//	{
//		;
//	}
//
//	char ch = 0;
//	ch = getchar();
//
//	if (ch == 'Y')
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}


//switch ֧��Ƕ��
//case
//break
// default
// while
//continue