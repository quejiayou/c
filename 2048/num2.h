#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define ROW 4
#define COL 4
#define EXO 2048

//��ʼ��
void initialize(int num[ROW][COL], int row, int col);
//��ӡ
void print(int num[ROW][COL], int row, int col);
//���ֵ
void random(int num[ROW][COL], int row, int col);
//�����ƶ�
void move(int num[ROW][COL], int row, int col);
//����
char cat(int num[ROW][COL], int row, int col);
//�����������ƶ�
void rotate(int num[ROW][COL], char arr, int row, int col);
//�ж���Ϸ��Ӯ
int judge(int num[ROW][COL], int row, int col);