//������������Ϸ
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
  //�������߳���������Ϣ
	char board[ROW][COL] = {0};
	//��ʼ�����ǵ�����
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);

}
void test()
{
	int input = 0;
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
			   break;
	   }
	
	}while(input);


}
int main()
{
	test ();
	return 0;
}