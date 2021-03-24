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
//写一个函数来交换整数
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
//int main()
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
//			printf("%d是素数  ", i);
//		else
//			printf("%d不是素数 ",i);
//
//	}
//		return 0;
//	}
//判断闰年
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
//在一个有序数组中找具体的某一个数
//二分查找
#include<stdio.h>
int binary_search(int arr[], int k,int sz)
{

	int left = 0;
	int right=sz-1;
	
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr[mid] <k)
		{
		left=mid+1;
		}
		else if(arr[mid]>k)
		{
			right=mid-1;
		}
		else 
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
		
	int arr[] ={1,2,3,4,5,6,7,8,9,10};
	
	int k = 5;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if(ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}