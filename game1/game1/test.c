#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("**************************\n");
	printf("**** 1.play    0.exit ****\n");
	printf("**************************\n");
}

void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

	}
	if (ret == '*')
		printf("���Ӯ!\n");
	else if (ret == '#')
		printf("����Ӯ!\n");
	else
		printf("ƽ��\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������!\n");
			break;
		}

	} while (input);

	return 0;
}