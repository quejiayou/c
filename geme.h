#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MINE 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS ROW+2
//��ʼ������
void initialize(char num[ROWS][COLS], int rows, int cols, char ret);
//��ӡ����
void checkerboard(char num[ROWS][COLS], int row, int col);
//���µ���
void burymine(char num[ROWS][COLS], int row, int col);
//�Ų����
void rowmine(char mine[ROWS][COLS], char stamp[ROWS][COLS], int row, int col);