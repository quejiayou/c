#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#define ROW 52
#define COL 3
#define GOU 5

void prim(char arr[][COL], int row, int col);
void pret(char arr[][COL], char arr1[][COL], int row, int col);
void our(char arr1[][COL], int row, int col, int gou);