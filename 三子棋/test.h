#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#define ROW 3
#define COL 3
//��Ϸ����
int game_interface();
//��ʼ������
void initial(char board[ROW][COL], int row, int col);
//��ӡ����
void stamp(char board[ROW][COL], int row, int col);
//�������
void player(char board[ROW][COL], int row, int col);
//��������
void brain(char board[ROW][COL], int row, int col);
////���Ӯ����x
////����Ӯ����o
//ƽ�ַ���n
//��������m
char judge(char board[ROW][COL], int row, int col);