#include "acc.h"
void prim(char arr[][COL], int row, int col)
{
	int i = 0, j = 0;
	int n = 0;
	int m = 0;
	char num[] = { "SHDC" };
	char num2[] = { "A2345678910JQK" };

	for (i = 0; i < row; i++, m++)
	{
		arr[i][0] = num[n];
		arr[i][1] = num2[m];
		if (num2[m] == '1')
		{
			arr[i][2] = '0';
			m++;
		}	
		if (arr[i][1] == 'K')
		{
			m = -1;
			n++;
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf(" ");
	}
}	
void pret(char arr[][COL],char arr1[][COL], int row, int col)
{
	int num[ROW] = { 0 };//ROW = 52
	int i = 0, j = 0;
	//���0-52�в���ȵ����Ž�num����
	while (j < row - 1)
	{
		int flag = 1;
		int x = rand() % row;// 0 - 51, row = 52
		for (i = 0; i < row; i++)
		{
			if (x == num[i])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			num[j] = x;
			j++;
		}
	}
	//�����������ϴ�ƣ���ÿ��AS���������һ��
	for (i = 0; i < row; i++)
	{
		int x = num[i];
		for (j = 0; j < col; j++)
		{
			arr1[i][j] = arr[x][j];
		}
	}
}
void our(char arr1[][COL], int row, int col, int gou)
{
	int i = 1, j = 0; 
	printf("\n��ʼ���з���:");
	Sleep(3000);
	printf("�������\n\n");
	switch (i)
	{
	case 1:
		printf("���һ��ʼ����:");
		for (i = 0; i < gou; i++)
		{
			Sleep(1300);
			for (j = 0; j < col; j++)
			{
				printf("%c", arr1[i][j]);
				arr1[i][j] = 0;
			}
			printf(" ");
		}
		printf("\n");
	case 2:
		printf("��Ҷ���ʼ����:");
		for (; i < gou * 2; i++)
		{
			Sleep(1300);
			for (j = 0; j < col; j++)
			{
				printf("%c", arr1[i][j]);
				arr1[i][j] = 0;
			}
			printf(" ");
		}
		printf("\n");
	case 3:
		printf("�������ʼ����:");
		for (; i < gou * 3; i++)
		{
			Sleep(1300);
			for (j = 0; j < col; j++)
			{
				printf("%c", arr1[i][j]);
				arr1[i][j] = 0;
			}
			printf(" ");
		}
		printf("\n");
	case 4:
		printf("����Ŀ�ʼ����:");
		for (; i < gou * 4; i++)
		{
			Sleep(1300);
			for (j = 0; j < col; j++)
			{
				printf("%c", arr1[i][j]);
				arr1[i][j] = 0;
			}
			printf(" ");
		}
		printf("\n\n");
	}
	printf("��ʣ��%d����:", row - gou * 4);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%c", arr1[i][j]);
		}
		if(arr1[i][j] != 0)
			printf(" ");
	}
}