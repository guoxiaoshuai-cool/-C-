#include"game.h"
#include<stdio.h>

void InitBoard(int board[ROW][COL], int row, int col)
{
	int i =0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			board[i][j]=' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)

{
	int i = 0;
	for(i =0; i<row; i++)
	{
		int j=0;
		for(j = 0;j<col; j++);
		/*printf(" %c | %c |  %c \n",board[i][0],board[i][1],board[i][2]);*/
		if(i<row -1)
			printf("---|---|---\n");
	}

}