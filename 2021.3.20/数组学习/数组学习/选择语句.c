#include<stdio.h>
int main()
{
	int num;
	printf("intput a num:");
	scanf("%d",&num);
	while(num<=100)
	{
	if(num%2==1)
		printf("输出为奇数：%d\n",num);
	else
		printf("不是奇数：%d\n",num);
	num++;
	}
	return 0;
	}