//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("请输入：");
//	scanf("%d",&n);
//	for(i=2;i<n; i++)
//	{
//		if(n%i == 0)
//		{
//	break;
//		}
//	}
//		if(i == n)
//{
//			printf("%d输出为素数",n);
//}
//			return 0;
//}
////#define _CRT_SECURE_NO_WARNINGS
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
//自己看代码吧，这问题就是一个找数组的一个数
//#include<stdio.h>
//    int main()
//    {
//       int target;
//       int i = 0;
//       int j = 0;
//       int m = 0;
//       int arr[]={2,7,11,15,};
//       printf("please input the target :\n");
//       scanf("%d",&target);
//       for(i=0; i<sizeof(arr)/sizeof(arr[0])-1; i++)
//      {
//       for(j=1; j<sizeof(arr)/sizeof(arr[0]); j++)
//       if(arr[i]+arr[j]==target)
//       {
//          printf("please ouput %d ,%d",i,j);
//          m=1;
//          
//       }
//      }
//       if(m!=1)
//       {
//           printf("no the number");
//       }
//      
//      return 0;
//    }
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"1.h"

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
