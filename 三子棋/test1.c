#include "test.h"
int game_interface()
{
	int n = 0;
	printf("\n|������|\n");
	printf("|1.��ʼ|\n");
	printf("|0.�˳�|\n");
	printf("\nע�⣺��淶���������ÿո������ 1 1 \n��ѡ�� >>>");
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
	printf("�����>>>\n���������������>>>");
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
				printf("���걻ռ������������>>>");
		}
		else
		{
			printf("���������������������>>>");
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
	//�ж���
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
				return board[1][i];
		}
	}
	//�ж���
	for (i = 0; i < col; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
			return board[1][1];
	}
	//�ж�б�Խ���
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж�ƽ��
	if (draw(board, row, col) == 1 )
		return 'n';

		return'm';
}