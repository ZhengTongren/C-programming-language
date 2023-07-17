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
		printf("������:>");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}

int main()
{
	Test();
	return 0;
}