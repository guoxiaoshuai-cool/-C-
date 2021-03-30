////#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////int main()
////{
////	int year = 0;
////	int count = 0;
////	for(year = 1000; year<=2000;year++)
////	{
////		if(year % 4 == 0&&year%100!=0||year%400==0)
////		{
////			count++;
////		}
////	}
////	printf("%d",count);
////	return 0;
////}
////#include<stdio.h>
////int main()
////{
////	int a = 0x11223344;
////	int* pa = &a;
////	/*char* pc = &a;
////	printf("%p\n",pa);
////	printf("%p\n",pc);*/
////	*pa = 0;
////	printf("%x",a);
////	return 0;
////
////}
//
//
////int a = 0x11223344;
////int* pa = &a;
////char* pc = &a;
////printf("%p\n", pa);
////printf("%p\n", pa+1);
////printf("%p\n", pc);
////printf("%p\n", pc+1);
////return 0;
////}
//
////
////	int arr[10] = {0};
////	int* p = arr;//数组名，首元素的地址
////	int i = 0;
////	for(i = 0; i< 10; i++)
////	{
////		*(p+i) = 1;
////	}
////	return 0;
////}
////
////野指针
////#include<stdio.h>
////int main()
////{
////	/*int a ;*///局部变量不初始化，默认是随机值
////	int *p;//局部的指针变量，就被初始化随机值
////	*p = 20;
////	return 0;
////}
////#include<stdio.h>
////int* test()
//// {
////	 int a= 10;
////	 return &a;
//// }
////int main()
////{
////	int* p = test();
////	*p = 20;
////	printf("%d\n",*p);
////	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int* p;
//	*p = 20;//局部变量不初始化，默认为随机值
//	return 0;
//}
//如下：数组越界导致的野指针问题
//int main()
//{
//	int a[10] = {0};
//	int i = 0;
//	int *p = a;
//	for(i =0; i<= 12; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//无法返回地址
//#include<stdio.h>
//int* test()
//{
//	/*int a = 10;
//	return &a;*/
//	int arr[10] = {0};
//	return arr;
//}
//int main()
//{
//	int *p = test();
//	printf("%d\n",*p);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int*pa = &a;
//	int* p =NULL;//NULL 用来初始化指针的，给指针赋值。
//	return 0;
//}
//#include<stdio.h>
//int sum(int n)
//{
//	if(1 == n)
//	{
//	 return 1;
//	}
//	else if(2 == n)
//	{
//		return 1;
//	}
//	else 
//		return sum(n-1)+sum(n-2);
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fib(int m)
{
	int f3 = 0;
	if( 1 == m || 2 == m)

		return 1;
	else
	{
	int f1 = 1;
	int f2 = 1;
	int i = 0;
	for(i = 3; i<=m; i++)
	{
		f3 = f2 + f1;
		f1 = f2;
		f2 = f3;
	}
	}
	return f3;
}

int mian()
{
	int n,r;
	int sum =0;
	int j = 0;
	printf("input a number:");
	scanf("%d",&n);
	printf("\n");
	
	for(j = 1; j<=n; j++)
	{
	   r = fib(j);
	   sum = r+sum;
	   printf("第%d个数是%d\n",j,r);
	}
	
	printf("sum = %d\n",sum);
	return 0;
}



