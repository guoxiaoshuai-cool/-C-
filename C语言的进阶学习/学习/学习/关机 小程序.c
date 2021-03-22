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
	printf("电脑将在三分钟内关机，如果输入：郭小凯是帅哥，就取消关机！\n");
	scanf("%s",&input);
	if( strcmp(input, "郭小凯是帅哥")==0)
	{
		system("shutdown -a");break;
	}
   }
	return 0;
}
