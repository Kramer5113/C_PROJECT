#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define ROWS ROW+2
#define COL 9
#define COLS COL+2
#define bomb_count 10

void Initboard(char board[ROWS][COLS], int row, int col, char ret);
void Displayboard(char board[ROWS][COLS], int row, int col);
void setboard(char board[ROWS][COLS], int row, int col);
void Findboard(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col);