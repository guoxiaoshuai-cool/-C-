//#include<stdio.h>
//int main()
//{
//	int num;
//	printf("intput a num:");
//	scanf("%d",&num);
//	while(num<=100)
//	{
//	if(num%2==1)
//		printf("输出为奇数：%d\n",num);
//	else
//		printf("不是奇数：%d\n",num);
//	num++;
//	}
//	return 0;
//	}
//以上是判断一到一百的奇数代码
//#include<stdio.h>
//int main()
//{
//	int day=0;
//	scanf("%d",&day);
//	switch(day)
//	{
//		case 1:
//			printf("dd1\n");
//			case 2:
//			printf("dd2\n");
//			case 3:
//			printf("dd3\n");
//			case 4:
//			printf("dd5\n");
//			case 6:
//			printf("dd4\n");
//			case 5:
//			printf("dd6\n");
//			case 7:
//			printf("dd7\n");
//			case 8:
//			printf("dd8\n");
//	}
//	return 0;
//}
//
//
//以上为switch语句的初试
#include<stdio.h>
int main()
{
	int n=1;
	int m=2;
	switch(n)
	{
		case 1:m++;
		case 2:n++;
		case 3:
			switch(n)
			{
			case 1:n++;
			case 2:m++;n++;
				break;
			}
		case 4:m++;
			break;
		default:
			break;
}
printf("m=%d,n=%d\n",m,n);
return 0;
}