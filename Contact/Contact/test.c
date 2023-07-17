#define _CRT_SECURE_NO_WARNINGS 1


#include "contact.h"


void menu()
{
	printf("******************************************\n");
	printf("******  1. Add         2. Del       ******\n");
	printf("******  3. Modify      4. Search    ******\n");
	printf("******  5. Show        6. Sort      ******\n");
	printf("******  0. Exit                     ******\n");
	printf("******************************************\n");
}




void Test()
{
	int input = 0;
	Contact con;

	InitContact(&con);


	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);

		switch (input)
		{
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Modify:
			ModifyContact(&con);
			break;
		case Search:
			SearchContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			SortContact(&con);
			break;
		case Exit:
			SaveContact(&con);
			ExitContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	Test();
	return 0;
}