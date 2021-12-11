#include "test.h"
//��Ϸ���г���
void logic(char board[ROW][COL], int row, int col)
{
	//��ʼ������
	initial(board, row, col);
	//��ӡ����
	stamp(board, row, col);
	int sr = 0;
	while (1)
	{
		//�������
		player(board, row, col);
		system("cls");
		stamp(board, row, col);
		//�ж���Ӯ
		sr = judge(board, row, col);
		if (sr != 'm')
			break;
		//��������
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
		printf("\n***�����ʤ����***\n");
	}
	else if (sr == 'o')
	{
		system("cls");
		printf("\n***������ʤ����***\n");
	}
	else if (sr == 'n')
	{
		system("cls");
		printf("\n***��ƽ�֡�***\n");
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	char board[ROW][COL] = {0};
	int sz = 0;
	do
	{
		//��ʼ������
		sz = game_interface();
		switch (sz)
		{
		case 1:
			system("cls");
			logic(board, ROW, COL);
			break;
		case 0:
			system("cls");
			printf("\n����Ϸ�˳���\n");
			break;
		default:
			system("cls");
			printf("\n��ѡ�����,������ѡ��\n");
			break;
		}
	} while (sz);
	return 0;
}