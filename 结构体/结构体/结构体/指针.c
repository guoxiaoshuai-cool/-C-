//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	const char *p = "acdef";//常量字符串；
//	//*p = 'w';
//	/*printf("%c\n", *p);*/
//	/*printf("%s\n", p);*/
//	//printf("%s",*p);
//	return 0;
//}//segmentation fault
//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//
//}
//int main()
//{
//	char ch = 'w';
//	char *p = &ch;
//	const char *p2 = "abcdef";
//	return 0;
//}
//#include<stdio.h>
//
//void test3(int arr[])
//{
//
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test3(arr);
//	return 0;
//
//

//#include<stdio.h>
//void menu()
//{
//	printf("*************************\n");
//	printf("*** 1.add      2.sub  ***\n");
//	printf("*** 3.mul      4.div  ***\n");
//	printf("******0.exit*************\n");
//	printf("*************************\n");
//}
//int main()
//{
//	do
//	{
//		int intput = 0;
//		menu();
//		printf("请选择");
//		scanf("%d", &intput);
//		switch (intput)
//		case 1:
//			printf
//
//	}
//}
//#include<stdio.h>
//typedef struct
//{
//	int age;
//	char name[20];
//
//}stu ;
//int main()
//{
//
//	printf("");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(p + 1));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(p[0]));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(p[0]));
//	printf("%d\n", sizeof(&p + 1));
//	printf("%d\n", sizeof(&p));
//	printf("%d\n", sizeof(&p[0] + 1));
//
//
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	char * p="abcdef"
//	return 0;

//逆序函数，将字符串内容逆序输出
//#include<stdio.h>
//#include<string.h>
//void reverse(char*str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left<right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	gets(arr);
//	//scanf("%s", arr);
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

//计算sum=a+aa+aaa...的前几项和的值。
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//

//判断一个数是否为水仙花数（自幂数）；如：1^3+5^3+3^3=153;
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/= 10)
//		{
//			n++;
//			/*i /= 10;*/
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int )pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//打印一个菱形
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
