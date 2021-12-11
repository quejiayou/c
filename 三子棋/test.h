#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#define ROW 3
#define COL 3
//游戏界面
int game_interface();
//初始化棋盘
void initial(char board[ROW][COL], int row, int col);
//打印棋盘
void stamp(char board[ROW][COL], int row, int col);
//玩家下棋
void player(char board[ROW][COL], int row, int col);
//电脑下棋
void brain(char board[ROW][COL], int row, int col);
////玩家赢返回x
////电脑赢返回o
//平局返回n
//继续返回m
char judge(char board[ROW][COL], int row, int col);