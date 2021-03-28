#define ROW 10
#define COL 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);
char IsWin(char board[ROW][COL], int row, int col);

//告诉我们四种游戏的状态
//玩家赢 —— ’*‘
//电脑赢 —— '#'
//平局—— ’Q'
//继续—— ’C‘