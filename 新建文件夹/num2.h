#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define ROW 4
#define COL 4
#define EXO 2048

//初始化
void initialize(int num[ROW][COL], int row, int col);
//打印
void print(int num[ROW][COL], int row, int col);
//随机值
void random(int num[ROW][COL], int row, int col);
//向左移动
void move(int num[ROW][COL], int row, int col);
//输入
char cat(int num[ROW][COL], int row, int col);
//向其他方向移动
void rotate(int num[ROW][COL], char arr, int row, int col);
//判断游戏输赢
int judge(int num[ROW][COL], int row, int col);