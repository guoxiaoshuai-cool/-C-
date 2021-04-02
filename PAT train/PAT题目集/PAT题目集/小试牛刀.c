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
#include<stdio.h>
#include<string.h>
int main()
{
	 int i=0;
    char a[100];
   fgets(a, 80, stdin);
   
   a[strlen(a)-1]='\0';
    for(i=strlen(a)-1; i>=0; i--){
         if(a[i]==' '){
             printf("%s", &a[i+1]);
             printf(" ");
             a[i]='\0';
         }
        if(i==0)
            printf("%s", &a[i]);
    }
    return 0;
}