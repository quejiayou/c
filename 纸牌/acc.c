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
	//随机0-52中不相等的数放进num里面
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
	//拿随机数进行洗牌，但每次AS总是在最后一个
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
	printf("\n开始进行发牌:");
	Sleep(3000);
	printf("发牌完毕\n\n");
	switch (i)
	{
	case 1:
		printf("玩家一开始翻牌:");
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
		printf("玩家二开始翻牌:");
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
		printf("玩家三开始翻牌:");
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
		printf("玩家四开始翻牌:");
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
	printf("还剩下%d张牌:", row - gou * 4);
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