#include "test.h"
int game_interface()
{
	int n = 0;
	printf("\n|三子棋|\n");
	printf("|1.开始|\n");
	printf("|0.退出|\n");
	printf("\n注意：请规范输入坐标用空格隔开如 1 1 \n请选择 >>>");
	scanf_s("%d", &n);
	return n;
}
void initial(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void stamp(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{

					printf("|");
				}
			}
		}
		printf("\n");
	}
}
void player(char borad[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("玩家走>>>\n请输入下棋的坐标>>>");
	while (1)
	{
		scanf_s("%d%d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col )
		{
			if (borad[x - 1][y - 1] == ' ')
			{
				borad[x - 1][y - 1] = 'x';
				break;
			}
			else
				printf("坐标被占用请重新输入>>>");
		}
		else
		{
			printf("坐标输入错误请重新输入>>>");
		}
	}
}
void brain(char borad[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (borad[x][y] == ' ')
		{
			borad[x][y] = 'o';
			break;
		}
	}
}
int draw(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char judge(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	//判断行
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
				return board[1][i];
		}
	}
	//判断列
	for (i = 0; i < col; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
			return board[1][1];
	}
	//判断斜对角线
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断平局
	if (draw(board, row, col) == 1 )
		return 'n';

		return'm';
}