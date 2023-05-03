#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
////int main()
////{
////	printf("%d", 4321);
////	return 0;
////}
//
//
//void menu()
//{
//	printf("******************\n");
//	printf("**1. play 0.exit**\n");
//	printf("******************\n");
//
//}
//
//void game()
//{
//	//printf("hehe\n");
//	srand(time(NULL));
//	int input = 0;
//	
//	int ret = rand() % 20 + 1;
//
//	while (1)
//	{
//		scanf("%d", &input);
//		if (input > ret)
//			printf("猜大了\n");
//
//		else if (input < ret)
//			printf("猜小了\n");
//
//			
//		else
//		{
//			printf("great\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	menu();
//	int n = 1;
//
//	do
//	{
//		scanf("%d", &n);
//		switch(n)
//		{
//			case 1:
//				//menu();
//				game();
//				break;
//			case 0:
//				break;
//			default:
//				continue;
//		}
//	} while (n);
//
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*******************\n");
	printf("**1.play   0.exit**\n");
	printf("*******************\n");

}

void game()
{
	//生成随机数
	srand(time(NULL));
	int ret = rand() % 10 + 1;
	int s = 0;
	while (1)
	{
		printf("请猜数字:> ");
		scanf("%d", &s);
		if (s > ret)
			printf("猜大了,");
		else if(s<ret)
			printf("猜小了,");
		else
		{
			printf("猜对了！\n");
			break;
		}
	}
}
int main()
{
	menu();
	int input = 0;

	//选择1 开始游戏 选择0 退出
	//可重复
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}