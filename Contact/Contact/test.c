#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"


void menu()
{
	printf("********************************\n");
	printf("**** 1. add       2. del    ****\n");
	printf("**** 3. search    4. modify ****\n");
	printf("**** 5. show      6. sort   ****\n");
	printf("**** 0. exit                ****\n");
	printf("********************************\n");
}

void test()
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
		case ADD:
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			break;
		case SORT:
			break;
		case EXIT:
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}