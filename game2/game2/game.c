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
	printf("-------扫雷游戏-------\n");
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf(" %d  ", i);
		
	}
	printf("\n");
	printf("\n");
	//打印棋盘
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		//打印行号
		printf(" %d  ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col)
				printf("|");
		}
		printf("\n");
		//打印分割行
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
		printf("请输入要排查的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
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
			printf("坐标非法，请重新输入\n");
		if (win == row * col - EASY_COUNT)
		{
			printf("恭喜你，排雷成功\n");
			break;
		}
	}
	
}