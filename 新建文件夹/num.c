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
			num[i][j] = 0;//���鸳ֵΪ0
		}
	}
	//��numֵ�������
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
			printf("%5d", num[i][j]);//��ӡ�����������
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
		//�������Ŷ�����
		int arr1 = 0;
		int arr2 = 0;
		for (j = 0; j < row; j++)
		{
			if (num[i][j] == 0)
			{
				continue;//һ���е���0������
			}
			if (arr1 == 0)
			{
				arr1 = num[i][j];//�ѵ�һ����Ϊ���ֵ�� arr1
			}
			else
			{
				if (arr1 == num[i][j])//�ҵ���һ����arr1��ͬ��ֵ
				{
					num[i][arr2] = arr1 * 2;//��arr1��ֵ��2 ������arr2��λ��
					cat += num[i][arr2];//�ܷ���
					arr1 = 0;//�ٰ�arr1��Ϊ��
				}
				else//����ȵĻ�
				{
					num[i][arr2] = arr1;//��arr1 ������arr2��λ��
					arr1 = num[i][j];//arr1���¸�ֵ
				}
				arr2++;//����ƶ�һλ
			}
			num[i][j] = 0;//ÿһ��ѭ����Ҫ��ֵΪ��
		}
		if (arr1 != 0)//arr1���滹��һ��ֵ�Ļ�
		{
			num[i][arr2] = arr1;//�����Ž�ȥ
		}
	}
	printf("            grade: %d\n", cat);//��ʾ����
}
char cat(int num[ROW][COL], int row, int col)
{
	char arr = 0;
	arr = getch();//���벻������
	return arr;
}
void rotate(int num[ROW][COL],char arr, int row, int col)
{
	int i = 0, j = 0, k = 0;
	int num2[ROW][COL] = { 0 };
	if (arr == 'a')
	{
		move(num, row, col);//�����ƶ�
	}
	else if (arr == 'w')
	{
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				num2[i][j] = num[j][3 - i];//������ת
			}
		}
		move(num2, row, col);//���ƶ�
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
				num2[i][j] = num[3 - j][i];//������ת
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
				printf("�� ��ϲͨ�� ��\n");
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
		printf("����Ϸ������\n");
		return 0;
	}
}