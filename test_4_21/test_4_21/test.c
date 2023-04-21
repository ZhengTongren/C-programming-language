#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int i = 1;
//	int j = 1;
//	while (j<=10)
//	{
//		while (i <= 10)
//		{
//			printf("%d ", i);
//			i++;
//			if (i > 5)
//				break;
//		}
//		printf("\n");
//		j++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	
//	
//		while (i <= 10)
//		{
//			
//			if (i == 5)
//				continue;
//			printf("%d ", i);
//			i++;
//		}
//		
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i <= 9)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i > 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


//不可在for 循环体内修改循环变量，防止 for 循环失去控制



//int main()
//{
//	int i = 0;
//	for (i = 1; 1 <= 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


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

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("hehe ");
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 4; i++)
//	{
//		for (; j < 4; j++)
//			printf("hehe ");
//		printf("\n");
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	int j = 0;
	for (i = 0, j = 0; i < 2 && j < 5; ++i, j++)
	{
		printf("hehe ");
	}
	return 0;
}