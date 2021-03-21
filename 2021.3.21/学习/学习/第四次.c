//#include<stdio.h>
//
//	int main()
//	{
//		printf("ffff%d\n");
//		return 0;
//	}
//练一下手
//#include<stdio.h>
//int main()
//	{
//		int year,leap;
//		printf("enter year:");
//		scanf("%d",&year);
//		if(year%4==0)
//		{
//			if(year%100==0)
//			{
//				if(year%400==0)
//				leap=1;
//			
//				else 
//					leap=0;
//			}
//			else leap=1;
//
//		}
//		else  leap=0;
//			if(leap==1)
//			printf("%d is ",year);
//			else 
//				printf("%d is not",year);
//				printf("a leap year.\n");
//				return 0;
//}
//判断闰年的代码；
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//		if(i==5)
//			continue;
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}
//了解continue和break的区别将作用；
//#include<stdio.h>
//int main()
//{
	/*int ch = getchar();
	putchar(ch);
	printf("  %c\n",ch);*/
	//int ch=0;
	//while((ch=getchar()) !=EOF)//EOF是文本结束标志
	//{
	//	putchar(ch);
	//}

	//return 0;
//}//crtl+z的时候程序结束；
//whlie()函数的学习

//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	printf("intput three numbers:");
//	scanf("%d %d %d ", &a, &b,&c);
//	if(a<b)
//	
//		if(b<c)
//			printf("max=%d\n",c);
//		else 
//			printf("max=%d\n",b);
//	
//	
//	else if(a<c)
//		printf("max=%d\n",c);
//	else
//		printf("max=%d\n",a);
//	return 0;
//}
//这个判断三个整数大小的代码多少有点问题，
//#include<stdio.h>
//
//	int main()
//	{
//		int ret=0;
//		int ch=0;
//		char password[20]={0};
//		printf("please intput password:>");
//		scanf("%s", password);
//		while((ch=getchar()) !='\n')
//		{
//			;
//		}
//		/*getchar();*/
//		printf("please sure (Y/N):>");
//		ret= getchar();
//		if(ret=='Y')
//		{
//			printf("make suer successful:");
//		}
//		else
//			printf("no");
//		return 0;
//	}
//输入密码的问题

//#include<stdio.h>
//int main()
//{
//	int ch=0;
//	while((ch=getchar()) !=EOF)
//	{
//		if(ch<'0' || ch>'9')
//			continue ;
//		putchar(ch);
//	}return 0;
//}

//判断四个整数的最大值？
//#include<stdio.h>
//int main()
//{
//	int a,b,c,d,t1,t2,max;
//	printf("intput four numbers:");
//		scanf("%d %d %d %d",&a,&b,&c,&d);
//		t1=(a>b)? a:b;
//		t2=(t1>c)? t1:c;
//		max=(t2>d)? t2:d;
//		printf("output max :%d\n",max);
//		return 0;
//	
//
//
//}


//做一个小题目
//#include<stdio.h>
//#include<math.h>
//#define M 1000
//
//int main()
//{
//	int a;
//	int k;
//	printf("输入一个小于%d的整数a=",M);
//	scanf("%d",&a);
//	while(a>M)
//	{
//		printf("重新输出一个小于%d的整数a=",M);
//	scanf("%d",&a);
//
//	}
//		k=sqrt(a);
//	printf("%d的平方根是整数部分是%d\n",a,k);
//	return 0;
//}

//求1！+2！+3！。。。+10！
//#include<stdio.h>
//int main()
//{
//	int n=0;
//	int ret=1;
//	int sum=0;
//	for(n=1;n<=10;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum =%d\n",sum);
//	return 0;
//}
// 计算n!
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int n=0;
//	int ret=1;
//	printf("intput a number:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		ret=ret*i;
//	}
//	printf("输出ret =%d\n",ret);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int left =0;
	int right =sz-1;
	while(left<=right)
	{
	int mid=(left+right/2);
	if(arr[mid]>k)
	{
		right=mid-1;
	}
	else if(arr[mid]<k)
	{
		left=mid+1;
	}
	else
	{
		printf("找到了，下标是:%d\n",mid);
		break;
	}
}
if(left>right)
{
	printf("找不到\n");
}
	return 0;
}
