#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//дһ������ʵ��һ������printN��ʹ�ô���һ��������ΪN�Ĳ�����
//��˳���ӡһ��N��ȫ����������
//void printN(int N)
//{
//	int i;
//	for(i = 1; i<=N; i++)
//	{
//		printf("%d\n", i);
//	}
//	return ;
//}//ѭ���ķ���
//void printN( int N)
//{
//	if(N)
//	{
//		printN(N - 1);
//		printf("%d\n",N);
//	}
//	return ;
//}//�ݹ�ķ���
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

//�ö��ַ�����һ���м�Ԫ��
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
//	printf("����������Ҫ���ҵ�����");
//	scanf("%d",&x);
//	ret = FindBinary(x,List);
//	printf("��Ҫ�ҵ������±�Ϊ%dλ",ret);
//	return 0;
//}
//
//

//��������������е����ֵ
