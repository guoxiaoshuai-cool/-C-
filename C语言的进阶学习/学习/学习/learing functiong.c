////int Add (int x,int y)
////{
////	int z = 0;
////	z=x+y;
////	return z;
////}
////int main()
////{
////	int a =10;
////	int b =20;
//	int sum = Add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//		char arr2[20] = "#######";
//    strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//дһ����������������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//void Swap(int x,int y)
//{
//	int tmp = 0;
//    tmp =x;
//	x=y;
//	y = tmp;
//	}

//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b);
//	Swap(a,b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//int* pa =&a;
//*pa = 20;
//printf("%d\n",a);
//return 0;
//}
//#include<stdio.h>
//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b);
//	swap(&a,&b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//
//}
//int get_max(int x,int y)
//{if(x>y)
//return x;
//else 
//	return y; 
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a,b);
//	printf("max = %d\n",max);
//
//	return 0;
//
//}
	
	/*
	char arr[] = "hello word";
	memset(arr, '*' , 5);
	printf("%s\n", arr);
return 0;
}*/
//int main()
//{
//	char arr1[] = "bit";
//		char arr2[20] = "#######";
//    strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	int j;
//	for(j=2; j<=sqrt(n); j++)
//	{
//		if(n%j==0)
//		return 0;
//	}
//	return 1;
//	
//}
//int main()
//{
//	int i = 0;
//	for(i=100; i<=200; i++)
//	{
//		if(is_prime(i) == 1)
//			printf("%d������  ", i);
//		else
//			printf("%d�������� ",i);
//
//	}
//		return 0;
//	}
//�ж�����
//#include<stdio.h>
//
//int is_leap_year(int y)
//{
//if(y%4==0&& y%100!=0 || (y%400 == 0))
//     return 1;
//else
//	return 0;
//}
//int main()
//{
//	int year=0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(1 == is_leap_year(year))
//		{
//			printf("%d ",year);
//		}
//	}
//	return 0;
//}
//��һ�������������Ҿ����ĳһ����
//���ֲ���
//#include<stdio.h>
//int binary_search(int arr[], int k,int sz)
//{
//
//	int left = 0;
//	int right=sz-1;
//	
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(arr[mid] <k)
//		{
//		left=mid+1;
//		}
//		else if(arr[mid]>k)
//		{
//			right=mid-1;
//		}
//		else 
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//		
//	int arr[] ={1,2,3,4,5,6,7,8,9,10};
//	
//	int k = 5;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);
//	if(ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i=0,j=0,k=0;
//	printf("\n");
//	for(i=1;i<5; i++);
//	{
//	for(j=1;j<5; j++);
//	{
//	for(k=1;k<5; k++);
//	{
//		if(j!=k&& k!=i&& i!=j){
//		printf("%d%d%d",i,j,k);
//	}
//	}
//	}
//	}
//	return 0;
//}
//#include<stdio.h>
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//		return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int len = 0;
//	/*len = strlen("abc");
//		printf("%d\n", len);*/
//	printf("%d\n",strlen("abc"));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//int man()
//{
//	int a = 10;
//	int b =20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n" , sum);
//	return 0;
//}

//�����ĵݹ� �����Լ������Լ��ķ�������ͨ���Ѹ��ӵ�����ת��Ϊһ��һ��С��������⣬�ݹ��������С
//�����ɾʹ�����룻
//#include<stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//	main();//ջ���
//	return 0;
//}
//#include<stdio.h>
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	//print
//	return 0;
//}
//�������������������ַ������ȡ�
//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)//�����ַ����ĳ��ȣ�
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
// /*int count=0;
//   while(* str != '\0')
//   {
//	   count++;
//	   str++;
//   }
//   return count;
//}*/
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
// ��N�Ľ׳�
//#include<stdio.h>
//int Fac1(int n)
//{
//	if(n<=1)
//	return 1;
//	else return n*Fac1(n-1);
//
//
//	/*int i=0;
//	int ret = 1;
//	for(i=1; i<=n; i++)
//	{
//		ret=ret*i;
//	}
//	return ret;*/
//}
//int main()
//{
//	int n = 0;
//	int ret =0;
//	scanf("%d", &n);
//	ret = Fac1(n);
//	printf("%d\n", ret);
//	return 0;
//}


//�õݹ���쳲��������
// 1 2 3 5 8.....  ǰ���������ĺ͵��ڵ�������
//fib(n) n<=2, fib(n)=1
// n>2 fib(n)=fib(n-1)+fib(n-2)
//#include<stdio.h>
//int count =0;
//int Fib(int n)
//{
//	if(n==3)//���Ե�����쳲��������ļ������
//	{
//		count++;
//	}
//	if(n<=2)
//	return 1;
//	else
//	return Fib(n-1)+Fib(n-2);
//}
//int main()
//{
//	 int n = 0;
//	 int ret = 0;
//	 scanf("%d", &n);
//	 ret = Fib(n);
//	 //TDD������������
//	 printf("ret = %d\n",ret);
//	 printf("count = %d\n",count);
//
//	 return 0;
//}
//��ѭ�����쳲�������
//#include<stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n>2)
//	{
//	c = a+b;
//	a = b;
//	b = c;
//	n--;
//	}
//	return c;
//}
//int main()
//{
//	int n =0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret=Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}