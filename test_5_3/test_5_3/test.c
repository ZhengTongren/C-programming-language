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
//			printf("�´���\n");
//
//		else if (input < ret)
//			printf("��С��\n");
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
	//���������
	srand(time(NULL));
	int ret = rand() % 10 + 1;
	int s = 0;
	while (1)
	{
		printf("�������:> ");
		scanf("%d", &s);
		if (s > ret)
			printf("�´���,");
		else if(s<ret)
			printf("��С��,");
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}
int main()
{
	menu();
	int input = 0;

	//ѡ��1 ��ʼ��Ϸ ѡ��0 �˳�
	//���ظ�
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
			printf("�����������������\n");
			break;
		}
	} while (input);

	return 0;
}