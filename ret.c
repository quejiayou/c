#include "geme.h"
void page()
{
	printf("******   扫雷游戏 ******\n");
	printf("******   1.开始   ******\n");
	printf("******   0.结束   ******\n");
	printf("************************\n");
	printf("游戏规则：根据坐标输入时请用空格隔开, 并找出所有的雷。\n请输入:>");
}	
void construction()
{
	char mine[ROWS][COLS] = {0};
	char stamp[ROWS][COLS] = {0};
	//扫雷初始化
	initialize(mine, ROWS, COLS,'0');
	initialize(stamp, ROWS, COLS,'*');
	//打印棋盘
	checkerboard(stamp, ROW, COL);
	//埋下地雷
	burymine(mine, ROW, COL);
	//checkerboard(mine, ROW, COL);
	//排查雷
	rowmine(mine, stamp, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int n = 0;
	do
	{
		page();
		scanf_s("%d", &n);
		system("cls");
		switch (n)
		{
		case 1:
			construction();
			break;
		case 0:
			printf("《游戏退出》\n");
			break;
		default:
			printf("输入错误请重新输入:>\n");
				break;
		}
	} while (n);
	return 0;
}