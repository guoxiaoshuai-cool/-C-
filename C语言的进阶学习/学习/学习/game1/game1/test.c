//������������Ϸ
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"game.h"
void menu()
{
	printf("*************************\n");
	printf("*****1.play  0.exit******\n");
	printf("*************************\n");
}
void game()
{
	char ret = 0;
  //�������߳���������Ϣ
	char board[ROW][COL];
	//��ʼ�����ǵ�����
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret !='C')
		{
			break;
		}
		//�������壻
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		if(ret !='C')
		{
			break;
		}
	}
	if(ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if(ret =='#')
	{
		printf("����Ӯ\n");
	}
	else 
	{
		printf("ƽ��\n");
	}

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
	   menu();
	   printf("��ѡ��>");
	   scanf("%d", &input);
		   switch(input)
	   {
		   case 1:
			   game();
			  /* printf("������\n");*/
			   break;
		   case 0:
			   printf("�˳���Ϸ\n");
			   break;
		   default:
			   printf("ѡ�����������ѡ��\n");
			   break;
	   }
	
	}while(input);


}
int main()
{
	test ();
	return 0;
}