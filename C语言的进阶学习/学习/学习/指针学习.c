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
////	int* p = arr;//����������Ԫ�صĵ�ַ
////	int i = 0;
////	for(i = 0; i< 10; i++)
////	{
////		*(p+i) = 1;
////	}
////	return 0;
////}
////
////Ұָ��
////#include<stdio.h>
////int main()
////{
////	/*int a ;*///�ֲ���������ʼ����Ĭ�������ֵ
////	int *p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
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
//	*p = 20;//�ֲ���������ʼ����Ĭ��Ϊ���ֵ
//	return 0;
//}
//���£�����Խ�絼�µ�Ұָ������
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
//�޷����ص�ַ
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
//	int* p =NULL;//NULL ������ʼ��ָ��ģ���ָ�븳ֵ��
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
	   printf("��%d������%d\n",j,r);
	}
	
	printf("sum = %d\n",sum);
	return 0;
}



