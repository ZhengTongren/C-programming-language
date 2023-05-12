#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


void InitBoard(char board[ROWS][COLS], int row, int col, char ch)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ch;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("-------ɨ����Ϸ-------\n");
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf(" %d  ", i);
		
	}
	printf("\n");
	printf("\n");
	//��ӡ����
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		//��ӡ�к�
		printf(" %d  ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row)
		{
			printf("    ");
			int j = 0;
			for (j = 1; j <= col; j++)
			{
				printf("---");
				if (j < col)
					printf("|");
			}
			printf("\n");
		}
	}
}


void SetMine(char board[ROWS][COLS], int row, int col) 
{
	int i = EASY_COUNT;
	while (i)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			i--;
		}
	}
}


int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	/*int i = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			if (i != x && j!= y)
			{
				count += (board[i][j] - '0');
			}
		}
	}
	return count;*/
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] +
		mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win <= row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				
				DisplayBoard(show, ROW, COL);
				
				win++;
			}
		}
		else
			printf("����Ƿ�������������\n");
		if (win == row * col - EASY_COUNT)
		{
			printf("��ϲ�㣬���׳ɹ�\n");
			break;
		}
	}
	
}