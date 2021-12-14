#include "geme.h"
void initialize(char num[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0, j = 0;
	
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			num[i][j] = ret;
}
void checkerboard(char num[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	
	for (i = 0; i <= row; i++)
		printf("%d ", i);
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", num[i][j]);
		}
		printf("\n");
	}
}
void burymine(char num[ROWS][COLS], int row, int col)
{

	int i = 0;
	int x, y;
	while (i < MINE)
	{
		 x = rand() % row + 1;
		 y = rand() % col + 1;
		if (num[x][y] == '0')
		{
			num[x][y] = '1';
			i++;
		}
	}
}
int seekmine(char mine[ROWS][COLS], int x, int y)
{

	return mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] +
		mine[x - 1][y] - 8 * '0';
}
void signstamp(char stamp[ROWS][COLS], int x, int y, int row, int col)
{
	int i = 0;
	int j = 0;
	char sy[ROW][COL] = { 0 };
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			sy[i][j] = stamp[i][j];
		}
	}
	sy[x][y] = '!';
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			printf("%c", sy[i][j]);
		}
		printf("\n");
	}

}
void rowmine(char mine[ROWS][COLS], char stamp[ROWS][COLS], int row, int col)
{
	//���������û���׾ͷ�������Χ�м�����
	int x = 0, y = 0;
	int win = 0;
	char sex = 0;
	printf("��ʾ��0����Χû���ף�1����һ�����Դ����ƣ�\n");
	while (win < (row * col) - MINE)
	{
		printf("����������:>");
		scanf_s("%d%d", &x, &y);
		sex = getch();
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0')
			{				
				int min = seekmine(mine, x, y);
				stamp[x][y] = min + '0';
				win++;
				system("cls");
				checkerboard(stamp, ROW, COL);
				
			}
			else
			{
				system("cls");
				printf("����Ϸ�����㱻ը���ˡ�\n");
				checkerboard(mine, ROW, COL);
				printf("\n");
				break;
			}
			if (sex == '!')
			{
				stamp[x][y] = '!';
			}
		}

	}
	if (win == (row * col) - MINE)
	{
		system("cls");
		checkerboard(mine, ROW, COL);
		printf("\n����ϲͨ��,ɨ��С����\n");
	}
}