#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//写一个程序实现一个函数printN，使得传入一个正整数为N的参数后，
//能顺序打印一到N的全部正整数。
//void printN(int N)
//{
//	int i;
//	for(i = 1; i<=N; i++)
//	{
//		printf("%d\n", i);
//	}
//	return ;
//}//循环的方法
//void printN( int N)
//{
//	if(N)
//	{
//		printN(N - 1);
//		printf("%d\n",N);
//	}
//	return ;
//}//递归的方法
//int main()
//{
//	int N;
//	scanf("%d",&N);
//	printN(N);
//	return 0;
//}




//#include <stdio.h>
//#include <math.h>
//#include <time.h>
//clock_t start, stop;
//double duration;
//#define MAXN 10
//#define MAXK 10e7
//
//double f1(int n, double a[], double x)    
//{
//    int i;
//    double p = a[0];
//    for (i = 1; i <= n; i++)
//        p += pow(x, i)/a[i];    return p;
//}
//double f2(int n, double a[], double x)
//{
//    int i;
//    double p = 1 / a[n];
//    for (i = n; i > 1; i--)
//        p = 1/a[i - 1] + x * p;
//    return p;
//}
//void run(double(*f)(int, double*, double), double a[], int case_n)
//{
//    int i;
//    start = clock();
//    for (i = 0; i < MAXK; i++)
//        (*f)(MAXN - 1, a, 1.1);
//    stop = clock();
//    duration = ((double)stop - (double)start) / CLK_TCK / MAXK;
//    printf("tick%d=%f\n", case_n, (double)stop - (double)start);
//    printf("durotion%d=%6.2e\n", case_n, duration);
//}
//int main()
//{
//    int i;
//    double a[MAXN];
//    for (i = 0; i < MAXN; i++)
//        a[i] = (double)i;
//    run(f1, a, 1);
//    run(f2, a, 2);
//    return 0;
//}

//用二分法查找一个中间元素
//#include<stdio.h>
//int FindBinary(int x, int List[])
//{
//	
//	int left = 0;
//	int right = 19;
//	int mid = 0;
//	while(left <= right)
//	{
//		mid = (left+right)/2;
//		if(x<List[mid])
//		{
//			right = mid - 1;
//		}
//		else if(x>List[mid])
//		{
//			left = mid +1;
//		}
//		else{
//			return mid;
//		}
//		
//	}
//	return -1;
//}
//int main()
//{
//	int i;
//	int n = 20;
//	int List[20];
//	int x = 0;
//	int ret = 0;
//	for( i = 0; i<n; i++)
//	{
//		List[i] = i;
//	}
//	printf("请输入你需要查找的数：");
//	scanf("%d",&x);
//	ret = FindBinary(x,List);
//	printf("你要找的数字下标为%d位",ret);
//	return 0;
//}
//
//

//求出给定整数序列的最大值
