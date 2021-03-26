//测试三子棋游戏
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*************************\n");
	printf("*****1.play  0.exit******\n");
	printf("*************************\n");
}
void game()
{
  //数组存放走出的棋盘信息
	char board[ROW][COL] = {0};
	//初始化我们的棋牌
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);

}
void test()
{
	int input = 0;
	do 
	{
	   menu();
	   printf("请选择：>");
	   scanf("%d", &input);
		   switch(input)
	   {
		   case 1:
			   game();
			  /* printf("三子棋\n");*/
			   break;
		   case 0:
			   printf("退出游戏\n");
			   break;
		   default:
			   break;
	   }
	
	}while(input);


}
int main()
{
	test ();
	return 0;
}