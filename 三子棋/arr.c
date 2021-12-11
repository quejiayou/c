#include "test.h"
//游戏运行程序
void logic(char board[ROW][COL], int row, int col)
{
	//初始化棋盘
	initial(board, row, col);
	//打印棋盘
	stamp(board, row, col);
	int sr = 0;
	while (1)
	{
		//玩家下棋
		player(board, row, col);
		system("cls");
		stamp(board, row, col);
		//判断输赢
		sr = judge(board, row, col);
		if (sr != 'm')
			break;
		//电脑下棋
		brain(board, row, col);
		system("cls");
		stamp(board, row, col);
		sr = judge(board, row, col);
		if (sr != 'm')
			break;
	}
	if (sr == 'x')
	{
		system("cls");
		printf("\n***《玩家胜利》***\n");
	}
	else if (sr == 'o')
	{
		system("cls");
		printf("\n***《电脑胜利》***\n");
	}
	else if (sr == 'n')
	{
		system("cls");
		printf("\n***《平局》***\n");
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	char board[ROW][COL] = {0};
	int sz = 0;
	do
	{
		//初始化界面
		sz = game_interface();
		switch (sz)
		{
		case 1:
			system("cls");
			logic(board, ROW, COL);
			break;
		case 0:
			system("cls");
			printf("\n《游戏退出》\n");
			break;
		default:
			system("cls");
			printf("\n《选择错误,请重新选择》\n");
			break;
		}
	} while (sz);
	return 0;
}