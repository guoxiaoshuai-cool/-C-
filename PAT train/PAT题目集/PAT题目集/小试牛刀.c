//#define _CRT_SECURE_NO_WARNINGS 1
////1001 害死人不偿命的(3n+1)猜想 
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//   if(scanf("%d",&n))
//   {
//    while(n != 1)
//    {
//        if(n % 2 == 0)
//            n = n/2;
//        else n = (3*n+1)/2;
//        i++;
//    }
//   }
//   printf("%d",i);
//}
//
//
////1002 写出这个数
////读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//
//int main()
//{
//	int l = 0;
//	int i =0;
//	int sum = 0;
//	char arr[101];
//	int str[8];
//	int count = 0;
//	if(scanf("%s",arr))
//    {
//    getchar();
//    }
//	l = strlen(arr);
//	for(i = 0;i < l; i++)
//	{
//		sum =sum+(arr[i]-'0');
//	}
//
//	
//	for(i = 0; i<3; i++) 
//	{
//		if(sum>0)
//		{
//			str[i] = sum%10;
//			sum = (sum - str[i])/10;
//			count++;
//		}
//	}
//		for(i =count-1; i>=0; i--)
//		{
//			switch(str[i])
//			{
//			case 0:printf("ling");break;
//			case 1:printf("yi");break;
//			case 2:printf("er");break;
//			case 3:printf("san");break;
//			case 4:printf("si");break;
//			case 5:printf("wu");break;
//			case 6:printf("liu");break;
//			case 7:printf("qi");break;
//			case 8:printf("ba");break;
//			case 9:printf("jiu");break;
//			default:printf("enter data error\n");break;
//			}
//			if(i>0)
//				printf(" ");
//		}
//		return 0;
//	}
//1009 说反话
//给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出
//测试点三一直过不去，多少有点问题，以后不知道我会不会。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	 int i=0;
//    char a[100];
//   fgets(a, 80, stdin);
//   
//   a[strlen(a)-1]='\0';
//    for(i=strlen(a)-1; i>=0; i--){
//         if(a[i]==' '){
//             printf("%s", &a[i+1]);
//             printf(" ");
//             a[i]='\0';
//         }
//        if(i==0)
//            printf("%s", &a[i]);
//    }
//    return 0;
//}
//1004 成绩排名 
//读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//typedef struct stu
//{
//	char name[20];
//	char number[20];
//	int score ;
//}stu;
//
//int main()
//{
//	stu arr[100];
//	int n = 0;
//	int max = 0;
//	int min = 0;
//	int i = 0;
//	if(scanf("%d",&n))
//	for (i=0; i<n; i++)
//	{
//		if(scanf("%s%s%d",arr[i].name, arr[i].number, arr[i].score))
//		if(arr[i].score < arr[min].score)
//			min=i;
//		if(arr[i].score > arr[max].score)
//			max = i;
//	}
//	printf("%s%s\n",arr[max].name,arr[max].number);
//	printf("%s%s\n",arr[min].name, arr[min].number);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//typedef struct stu
//{
//	char name[12];
//	char number[12];
//	int score ;
//}stu;
//
//int main()
//{
//	int n = 0;
//	int max = 0;
//	int min = 0;
//	int i = 0;
//    stu arr[1000];
//	if(scanf("%d",&n))
//	for (i=0; i<n; i++)
//	{
//		if(scanf("%s %s %d",&arr[i].name, &arr[i].number,&arr[i].score))
//		if(arr[i].score < arr[min].score)
//			min=i;
//		if(arr[i].score > arr[max].score)
//			max = i;
//	}
//	printf("%s %s\n",arr[max].name,arr[max].number);
//	printf("%s %s\n",arr[min].name, arr[min].number);
//	return 0;
//}
//005 继续(3n + 1)猜想
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr1[300] = { 0 };
//	int arr2[6000] = { 0 };
//	int m;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//
//
//
//	}
//	for (i = 0; i < m; i++)
//	{
//		int num = arr1[i];
//		while (num != 1)
//		{
//			if (num % 2)
//			{
//				num = 3 * num + 1;
//				arr2[num] = 1;
//			}
//			else
//			{
//				num = num / 2;
//				arr2[num] = 1;
//			}
//
//		}
//	}
//	int arr3[300] = { 0 };
//	int j = 0;
//	for (i = 0; i < m; i++)
//	{
//		if (arr2[arr1[i]] == 0)
//		{
//			arr3[j] = arr1[i];
//			j++;
//		}
//	}
//	int a, b, t;
//	for (a = 0; a < j - 1; a++)
//	{
//		for (b = 0; b < j - 1; b++) {
//			if (arr3[b] < arr3[b + 1])
//			{
//				t = arr3[b];
//				arr3[b] = arr3[b + 1];
//				arr3[b + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d", arr3[i]);
//		if (i != j - 1)
//			printf(" ");
//
//	}
//	return 0;
//}






//1006 换个格式输出整数
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int a, b, c = 0;
//	int i = 0;
//	if (scanf("%d", &n))
//	if (n < 1000)
//	{
//		a = n / 100;
//		b = (n % 100) / 10;
//		c = n % 10;
//	}
//	while (a > 0)
//	{
//		printf("B");
//		a--;
//	}
//	while (b > 0)
//	{
//		printf("S");
//		b--;
//	}
//	for (i = 1; i <= c; i++)
//	{
//		printf("%d", i);
//	}
//	printf("\n");
//	return 0;
//}



//1007 素数对猜想

//#include <stdio.h>
//#include<math.h>
//int ss(int x)
//{
//	if (x == 1 || x == 2 || x == 3)
//		return 1;
//	for (int j = 2; j <= sqrt(x); j++)
//	{
//		if (x%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int n, count = 0;
//	if(scanf("%d", &n))
//	for (int i = 1; i <= n - 2; i++)
//	{
//		if (ss(i))
//			if (!ss(i + 1))
//				if (ss(i + 2))
//					count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//1008 数组元素循环右移问题
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int arr[200];
//	if (scanf("%d %d", &m, &n))
//		n = n % m;
//	for (i = 0; i < m; i++)
//	{
//		if (scanf("%d", &arr[i]));
//	}
//	int k = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		k = arr[m - 1];
//		for (j = m - 1; j > 0; j--)
//		{
//			arr[j] = arr[j - 1];
//		}
//		arr[0] = k;
//	}
//	for (i = 0; i < m; i++)
//	{
//		if (i == 0)
//		{
//			printf("%d", arr[i]);
//		}
//		else
//		{
//			printf(" %d", arr[i]);
//		}
//	}
//	printf("\n");
//	return 0;
//}



//1010 一元多项式求导
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int i = 1;
	int j = 1;
	while(1)
	{
		int a = 0;
		if (scanf("%d%d", &m, &n))
		 a = getchar();
		if (n != 0)
		{
			if (i == 1)
			{
				printf("%d %d", m*n, n - 1);
				i = 0;
			}
			else 
		    { 
			   printf(" %d %d", m*n, n - 1);
			   j = 0;
		    }
		}
		
			
		if (a =='\n')break;

	}
	if (j == 1)
	{
		printf("0 0");
	}
	printf("\n");
	return 0;
	
}