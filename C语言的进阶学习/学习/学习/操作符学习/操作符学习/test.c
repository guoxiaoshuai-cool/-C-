#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int count=0;
//int main()
////{/*
//	int a = 5;
//	int b = 3;
//	a = a+b;
//	b = a-b;
//	a = a-b;*/
// 加减法,缺陷是占内存太大，可能会超出整型所表示的值，会溢出
	//int main()
//{
//	int a = -2;
//	int b = a>>2;
//	printf("%d",b);
//	return 0;
//}
//int main()
//{
//	int a = 5 /2.0;
//	printf("a = %d\n",a);
//	return 0;
//}
//异或法调换两个整形的值
//int main()
//	{
//		int a =5;
//		int b = 3;
//		a = a^b;
//		b = a^b;
//		a = a^b;
//编写一个代码求一个整数中二进制码一的个数
//int main()
//{
//	int num ;
//	int count = 0;
//	scanf("%d",&num);//统计num的补码中有几个1
//	while(num)
//	{
//		if(num %2 == 1)
//		count++;
//		num = num/2;
//	}
//	printf("%d\n",count);
//	return 0;
//}
//上个代码负数判断不了
//int main()
//{
//		int i= 0;
//	int num = 0;
//	int count= 0;
//	scanf("%d",&num);
//
//	for(i = 0; i<32; i++)
//	{
//		if(1 == ((num>> i) &1))
//			count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}
//int main()
//{
//	int i=-6;
//	int b= 0;
//	 b=i>>2;
//	printf("%d",b);
//	return 0;
//}
//int main()
//{
//	int a = -10;
//	int *p = &a;
//		*p = 20;
//		return 0;
//}
//int main()
//{
//	int a = 10;
//	char c= 'r';
//	char* p = &c;
//	int arr[10] = {0};
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(c));
//	printf("%d\n",sizeof(p));
//	printf("%d\n",sizeof(arr));
//	return 0;
//}
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof(s  =a+5));
//	printf("%d\n", s);
//		return 0;
//}
//sizeof printf("%d\n"
////按位取反
////int main()
////{
////	int a = 0;
////	printf("%d\n", ~a);
////
////	return 0;
////}
////按位取反的案例
//int main()
//{
//	int a = 11;
//	a = a | (1<<2);
//	printf("%d\n",a);
//	a = a & (~(1<<2));
//	printf("%d\n",a);
//	return 0;
//}
////运算符和结合性
//int mian()
//{
//	int a = 10;
//	printf("%d\n",++a);
//	printf("%d\n",a++);
//
//强制类型转换
/*nt main()
{
	int a = (int)3.14;
	return 0;
}*/
//int main()
//{
//	int arr[10] = {0};
//	char ch[10] = {0};
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//	}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a>b?a:b);
//	printf("%d\n",max);
//	return 0;
//}
//int fun(int x)
//{
//		if (x==1)
//			return 1;
//		else return x*fun(x-1);
//	}
//int main()
//{
//	int n;
//	int sum;
//	scanf("%d",&n);
//    sum = fun(n);
//	printf("%d\n",sum);
//	return 0;
//}
//汉若塔问题
void move(char x, char y)
{
	count++;
	printf("%c ->%c\n",x,y);
}
void hannoi(int m, char a, char b, char c)
{
	/*void move(char x,char y);*/
	if(m == 1)
	{
		move(a,c);
	}
	else
	{
		hannoi(m-1,a,c,b);
		move(a,c);
		hannoi(m-1,b,a,c);
	}
}

int main()
{
	/*void hannoi(int m, char a, char b, char c);*/
	int m=0;
	printf("请输入盘子个数：\n");
	scanf("%d",&m);
	printf("这些盘子移动的步骤如下：\n");
	hannoi(m,'A','B','C');
	printf("一共需要%d\n",count);
		return 0;
}

//void move(char x,char y)
//{
//	printf("%c-->%c\n",x,y);
//}
//
//void hanoi(int n,char one,char two,char three)
//{
//	/*void move(char x,char y);*/
//	if(n==1)
//	{
//		move(one,three);
//	}else{
//		hanoi(n-1,one,three,two);
//		move(one,three);
//		hanoi(n-1,two,one,three);
//	}
//}
//
//
//int main()
//{
//	/*void hanoi(int n,char one,char two,char three);*/
//	int m;
//	printf("请输入盘子个数：\n");
//	scanf("%d",&m);
//	printf("这些盘子移动的步骤如下：\n");
//	hanoi(m,'A','B','C');
//	return 0;
//}