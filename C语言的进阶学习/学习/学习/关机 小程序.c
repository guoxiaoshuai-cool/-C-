#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[10]={0};
	system("shutdown -s -t 180");
   while(1)
   {
	printf("���Խ����������ڹػ���������룺��С����˧�磬��ȡ���ػ���\n");
	scanf("%s",&input);
	if( strcmp(input, "��С����˧��")==0)
	{
		system("shutdown -a");break;
	}
   }
	return 0;
}
