#include "num2.h"

//void print(int num[ROW][COL], int row, int col)
//{
//	int i = 0, j = 0;
//for (i = 0; i < row; i++)
//{
//	for (j = 0; j < col; j++)
//	{
//		printf(" 1 ");
//		if (j < col - 1)
//		{
//			printf("|");
//		}
//	}
//	printf("\n");
//	if (i < row - 1)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("---");
//			if (j < col - 1)
//			{
//
//				printf("|");
//			}
//		}
//	}
//	printf("\n");
//}
//}
void initialize(int num[ROW][COL], int row, int col)
{
	int i = 0, j = 0;	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			num[i][j] = 0;//数组赋值为0
		}
	}
	//给num值方便测试
	//num[0][0] = 1024;
	//num[0][1] = 1024;
	//num[0][2] = 1231;
	//num[0][3] = 2123;
	i = 2;
	while (i)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (num[x][y] == 0)
		{
			num[x][y] = 2;
			i--;
		}
	}
}
void print(int num[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%5d", num[i][j]);//打印数组向左对齐
		}
		printf("\n");
	}
}
void random(int num[ROW][COL], int row, int col)
{
	int j = 0, k = 0;
	int flag = 0;
	for (j = 0; j < row; j++)
	{
		for (k = 0; k < row; k++)
		{
			if (num[j][k] == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	while (flag)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (num[x][y] == 0)
		{
			int n = rand() % 10 == 1 ? 4 : 2;
			num[x][y] = n;
			flag--;
		}
	}		
}

void move(int num[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	static int cat = 0;
	for (i = 0; i < row; i++)
	{
		//给两个放东西的
		int arr1 = 0;
		int arr2 = 0;
		for (j = 0; j < row; j++)
		{
			if (num[i][j] == 0)
			{
				continue;//一行中等于0则跳过
			}
			if (arr1 == 0)
			{
				arr1 = num[i][j];//把第一个不为零的值给 arr1
			}
			else
			{
				if (arr1 == num[i][j])//找到下一个和arr1相同的值
				{
					num[i][arr2] = arr1 * 2;//把arr1的值乘2 给到第arr2的位置
					cat += num[i][arr2];//总分数
					arr1 = 0;//再把arr1变为空
				}
				else//不相等的话
				{
					num[i][arr2] = arr1;//把arr1 给到第arr2的位置
					arr1 = num[i][j];//arr1重新赋值
				}
				arr2++;//向后移动一位
			}
			num[i][j] = 0;//每一次循环都要赋值为零
		}
		if (arr1 != 0)//arr1里面还有一个值的话
		{
			num[i][arr2] = arr1;//把他放进去
		}
	}
	printf("            grade: %d\n", cat);//显示分数
}
char cat(int num[ROW][COL], int row, int col)
{
	char arr = 0;
	arr = getch();//输入不带回显
	return arr;
}
void rotate(int num[ROW][COL],char arr, int row, int col)
{
	int i = 0, j = 0, k = 0;
	int num2[ROW][COL] = { 0 };
	if (arr == 'a')
	{
		move(num, row, col);//向左移动
	}
	else if (arr == 'w')
	{
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				num2[i][j] = num[j][3 - i];//向下旋转
			}
		}
		move(num2, row, col);//再移动
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				num[i][j] = num2[3 - j][i];
			}
		}	
	}
	else if (arr == 's')
	{
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < row ; j++)
			{
				num2[i][j] = num[3 - j][i];//向上旋转
			}
		}
		move(num2, row, col);
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				num[i][j] = num2[j][3 - i];
			}
		}
	}
	else if (arr == 'd')
	{
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				num2[i][j] = num[3 - i][3 - j];
			}
		}
		move(num2, row, col);
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				num[i][j] = num2[3 - i][3 - j];
			}
		}
	}

}
int judge(int num[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	int x = 0, y = 0;
	int flag = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (num[i][j] == EXO)
			{
				system("cls");
				printf("《 恭喜通关 》\n");
				return 0;
			}
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if ((j + 1 < row) && (num[i][j] * num[i][j + 1] == 0 || num[i][j] == num[i][j + 1]))
				flag = 1;
			if ((i + 1 < col) && (num[i][j] * num[i + 1][j] == 0 || num[i][j] == num[i + 1][j]))
				flag = 1;
		}
	}
	if (flag == 1)
	{
		return 1;
	}
	else
	{
		printf("《游戏结束》\n");
		return 0;
	}
}