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
//#include<stdio.h>
//
//int main()
//{
//	int k,left,right,sz;
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	k=5;
//	 sz=sizeof(arr)/sizeof(arr[0]);
//	 left =0;
//	 right =sz-1;
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//	if(arr[mid]>k)
//	{
//		right=mid-1;
//	}
//	else if(arr[mid]<k)
//	{
//		left=mid+1;
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n",mid);
//		break;
//	}
//}
//if(left>right)
//{
//	printf("找不到\n");
//}
//	return 0;
//}
//多少有点问题，我不能输入一个K值，过几天看是否可以解决。

//b编写代码，演示多个字符从两端移动，向中间汇聚；
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[]="welcome  to bit!!!!!!!";
//	char arr2[]="######################";
//	int left = 0;
//	//int right= sizeof(arr1)/sizeof(arr1[0])-2;
//	int right =strlen(arr1)-1;
//	printf("%s\n",arr2);
//	while(left<=right)
//	{
//		
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//	    printf("%s\n",arr2);
//		Sleep(1000);		//休息一秒
//		system("cls");
//		left++;
//		right--;
//		 
//	}
//		  printf("%s\n",arr2);
//	return 0;
//}
//
//
//
//
//

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i=0;
//	char password[20]={0};
//	for(i=0;i<3; i++)
//	{
//		printf("please input password:>");
//		scanf("%s",&password);
//			if(strcmp(password,"123456")==0)
//			{
//				printf("login successfully\n");
//			break;
//	}
//			else{
//				printf("wrong password\n");
//			}
//	}
//			if(i==3);
//			printf("three wrong passwords ,exit program\n");
//			return 0;
//	}
//
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int a,b,c;
//	scanf("%d%d%d", &a,&b,&c);
//	if(a<b)
//	{
//		int tem=a;
//		a=b;
//		b=tem;
//	}
//	if(a<c)
//	{
//		int tem=a;
//	a=c;
//	c=tem;
//	}
//
//   if(b<c)
// {
//    	int tem=b;
//  b=c;
//  c=tem;
//  }
//	printf("%d%d%d",a,b,c);
//
//	return 0;
//}输入三个数，要求从大到小输出，输入四个五个数也可用此种思想计算


//打印三的倍数的数
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=100; i++)
//	{
//		if(i%3==0)
//			printf(" %d ",i);
//	}
//	return 0;
//}
//计算两个数的最大公约数；辗转相除法
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int r=0;
//	int m=0;
//	int n=0;
//    printf("输入两个数");
//	scanf("%d %d",&m,&n);
//	while(m%n);
//	{
//		r=m%n;
//		m=n;
//		n=r;
//	}
//	printf("%d\n",r);
//	return 0;
//}
//打印素数
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i=0,count=0;
//	for(i=101;i<=200;i+=2)
//	{
//		int j;
//		for(j=2;j<i;j++) 
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//			
//		}
//		if(j==i)
//		{
//			count++;
//			printf(" %d ",i);
//		}
//
//	}
//	printf("\ncount = %d\n",count);
//		return 0;
//
//	}
	// 数九的个数 
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i=0;
//	int count=0;
//
//	for(i=1; i<100;i++)
//	{
//		if(i%10==9)
//			count++;
//		 if(i/10 ==9)
//			count++;
//	}
//	printf("输出九的个数%d\n",count);
//	return 0;
//
//}
//分数求和
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i =0;
//	double sum=0;
//	int flag=1;
//	for(i=1;i<=100;i++)
//	{
//		sum+=flag*1.0/i;
//		flag=-flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}
//
//求最大值，求十个整数的最大值
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max =arr[0];//最大值
//	int i=0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz; i++)
//	{
//		if(arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max= %d\n",max);
//	return 0;
//}
//九九乘法表的实现代码如下：
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i =0;
//	for(i=1;i<=9; i++)
//	{
//		//打印一行
//		int j=1;
//		for(j=1;j<=i; j++)
//		{
//			printf(" %d*%d=%-2d ",j,i,j*i);
//		}
//		printf("\n");
//	}
//return 0;
//}
//趣味小游戏，搭建猜数字游戏
//1.电脑会生成一个随机数；
//2.猜数字
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("**** 1.play  0.exit**********\n");
//	printf("*****************************\n");
//}
//void game()
//{//生一个随机数
//	int ret =0;
//	int guess =0;
//
//	//时间戳
// ret =rand()%100-1;//生成一到一百的随机数printf("%d\n",ret);
//
// while(1)
// {
//	printf("猜数字:");
//	scanf("%d",&guess);
//	if(guess>ret)
//	{
//		printf("猜大了\n");
//	}
//	else if(guess<ret)
//	{
//		printf("猜小了\n");
//	}
//	else
//	{
//		printf("猜对了\n");
//		break;
//	}
// }
//}
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d",&input);
//			switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//			default:
//				printf("选择错误\n");
//				break;
//			}
//	}while(input);
//
//	return 0;
//}
//goto 语句的初解 电脑关机程序  
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//#include<stdio.h>
//int main()
//{
//	char input[10]={0};
//	system("shutdown -s -t 60");
//again://whlie(1)
//	printf("电脑将在一分钟内关机，如果输入：我是猪，就取消关机！\n");
//	scanf("%s",&input);
//	if( strcmp(input, "我是猪")==0)
//	{
//		system("shutdown -a");//break;
//	}
//	else 
//	{
//		goto again;
//	}
//	return 0;
//}//方法二
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[10]={0};
//	system("shutdown -s -t 60");
//   while(1)
//   {
//	printf("电脑将在一分钟内关机，如果输入：我是猪，就取消关机！\n");
//	scanf("%s",&input);
//	if( strcmp(input, "我是猪")==0)
//	{
//		system("shutdown -a");break;
//	}
//   }
//	return 0;
//}
