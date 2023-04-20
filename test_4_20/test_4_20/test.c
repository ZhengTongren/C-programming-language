#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>




//猜数字小游戏源码
//
//void menu()
//{
//	
//	printf("-------------------------\n");
//	printf("    1.play     0.exit    \n");
//	printf("-------------------------\n");
//}
//
//void game()
//{
//	
//	int ret = rand()%30+1;
//
//	printf("Please scanf your guess:> ");
//	while (1)
//	{
//		int n = 0;
//		
//		scanf("%d", &n);
//		if (n > ret)
//			printf("more than the real:> ");
//		else if (n < ret)
//			printf("less than the real:> ");
//		else
//		{
//			printf("Good!\n");
//			Sleep(2000);
//			system("cls");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	printf("Welcome to the game！\n");
//	Sleep(1200);
//	srand((unsigned int)time(NULL));
//	
//	system("cls");
//	int input = 0;
//	
//	
//
//	do
//	{
//		menu();
//		printf("input:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("The random num will happen from 1 to 20!\n");
//			Sleep(2000);
//			system("cls");
//			printf("Go!\n");
//			game();
//			break;
//		case 0:
//			printf("Exit!\n");
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	/*先输入input
//	如果输入0，先跳出switch
//	while(0) 不再循环*/
//
//	return 0;
//}
//
//

//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    if (a < b)
//        a = b;
//    if (a < c)
//        a = c;
//    if (a < d)
//        a = d;
//    printf("%d\n", a);
//    return 0;
//}


//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
