#include"game.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define _CRT_SECURE_NO_WARNINGS 1
void InitBoard(int board[ROW][COL], int row, int col)
{
	int i =0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)

{
	int i = 0;
	for(i =0; i<row; i++)
	{
		int j=0;
		for(j = 0;j<col; j++)
		{
		printf(" %c ",board[i][j]);
		if(j<col - 1)
			printf("|");
	     }
		printf("\n");	
		/*printf(" %c | %c |  %c \n",board[i][0],board[i][1],board[i][2]);*/
	//打印分割行

		if(i<row -1)
		{
			for(j = 0; j<col; j++)
			{
				printf("---");
				if(j<col-1)
				
				printf("|");
				
			}
			printf("\n");
			/*printf("---|---|---\n");*/
	}

	}
}
void PlayMove(char board[ROW][COL],int row,int col)
{
	int x ;
	int y ;
	printf("玩家走:>\n");
	while(1)
	{
	printf("请输入要下的坐标:>\n");
	scanf("%d%d", &x, &y);
	if(x>=1 && x<= row && y>=1&&y <= col)//判断坐标是否合法
	{
      if(board[x-1][y-1] != ' ')
	  {
		 printf("该坐标被占用\n");
		  
	  }
	  else 
	  {
		   board[x - 1][y - 1] = '*';
		  break;
	  }
	}
	else
	{
		printf("坐标非法，请重新输入！\n");
	}
}
}
void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x ;
	int y ;
	printf("电脑走:>\n");
	while(1)
	{
	x = rand() % row;
	y = rand() % col;
	if(board[x][y] == ' ')
	{
		board[x][y] = '#';
	    break;
	}
}
}
//返回1表示棋盘满了
//返回0表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i ;
	int j ;
	for(i = 0;i<row;j++)
	{
		for(j=0; j<col; j++)
		{
			if(board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;//满了

}


char IsWin(char board[ROW][COL], int row, int col)
{
	int i ;
	//恒三行
	for(i=0; i<row; i++)
	{
		if(board[i][0] == board[i][1]&&board[i][1] == board[i][2]&&board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	//for(i = 0; i<col; i++)
	//{
	//	if(board[0][i] == board[1][i]&& board[1][i] == board[2][i]&&board[1][i]!=' ')
	//	{
	//	return board[1][i];
	//	}
	//}//竖三行
	for(i = 0; i<col; i++)
	{
		if(board[0][i] == board[1][i]&& board[1][i]&& board[2][i]&&board[1][i]!=' ')
		{
		return board[1][i];
		}
	}

	if(board[0][0] == board[1][1]&& board[1][1] == board[2][2]&&board[1][1]!=' ')
				return board[1][1];
    if(board[2][0] == board[1][1]&&board[1][1] == board[0][2]&&board[1][1]!=' ')
				return board[1][1];
	//判断是否平局，没有人赢，棋盘满了
	if(1 ==IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	return 'C';
}
