#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9 

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 80

//��ʼ������
void InitBoard(char board[ROWS][COLS], int row, int col, char ch);
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//������
void SetMine(char board[ROWS][COLS], int row, int col);
//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//�����Ų�������Χ�׵ĸ���
int GetMineCount(char board[ROWS][COLS], int x, int y);