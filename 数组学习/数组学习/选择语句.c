#include<stdio.h>
int main()
{
	int num;
	printf("intput a num:");
	scanf("%d",&num);
	while(num<=100)
	{
	if(num%2==1)
		printf("���Ϊ������%d\n",num);
	else
		printf("����������%d\n",num);
	num++;
	}
	return 0;
	}