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
//初始化数组
void initialize(char num[ROWS][COLS], int rows, int cols, char ret);
//打印棋盘
void checkerboard(char num[ROWS][COLS], int row, int col);
//埋下地雷
void burymine(char num[ROWS][COLS], int row, int col);
//排查地雷
void rowmine(char mine[ROWS][COLS], char stamp[ROWS][COLS], int row, int col);