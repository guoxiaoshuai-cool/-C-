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

//��������������Ϸ��״̬
//���Ӯ ���� ��*��
//����Ӯ ���� '#'
//ƽ�֡��� ��Q'
//�������� ��C��