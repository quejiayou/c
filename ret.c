#include "geme.h"
void page()
{
	printf("******   ɨ����Ϸ ******\n");
	printf("******   1.��ʼ   ******\n");
	printf("******   0.����   ******\n");
	printf("************************\n");
	printf("��Ϸ���򣺸�����������ʱ���ÿո����, ���ҳ����е��ס�\n������:>");
}	
void construction()
{
	char mine[ROWS][COLS] = {0};
	char stamp[ROWS][COLS] = {0};
	//ɨ�׳�ʼ��
	initialize(mine, ROWS, COLS,'0');
	initialize(stamp, ROWS, COLS,'*');
	//��ӡ����
	checkerboard(stamp, ROW, COL);
	//���µ���
	burymine(mine, ROW, COL);
	//checkerboard(mine, ROW, COL);
	//�Ų���
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
			printf("����Ϸ�˳���\n");
			break;
		default:
			printf("�����������������:>\n");
				break;
		}
	} while (n);
	return 0;
}