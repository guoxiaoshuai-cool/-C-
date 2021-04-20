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



//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int num[123] = { 0 };
//	/*int num[] = { 1,2,3,4,5 };*/
//	int target =0;
//	int i = 0;
//	int j = 0;
//	scanf("%d%d", &n,&target);
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&num[i]);
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 1 + i; j < n; j++)
//		{
//			sum = num[i] + num[j];
//			if (sum == target)
//			printf("[%d ,%d]", i, j);
//		}
//	}
//	return 0;
//}
//喝汽水的问题
//#include<stdio.h>
//int main()
//{
//	int total = 0;
//	int empty = 0;
//	int money = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty=empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	printf("%d\n", empty);
//	return 0;
//}
//给定一个整形数组就，要求输出前半部分是奇数，后半部分是偶数
//#include<stdio.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		
//		while ((left<right)&&arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while ((left<right)&&arr[right] % 2 == 0)
//
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}



//颠倒一个字符串的内容
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//void reverse(char*left, char*right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//
//}
//void move(char*arr, int k)//三步翻转法
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);//逆序左边
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序整体
//}
////void move(char * arr, int k)  //暴力求解法
////{
////	assert(arr != NULL);
////	int i = 0;
////	int len = strlen(arr);
////	for (i = 0; i < k; i++)
////	{
////		char tmp = *arr;
////		for (int j = 0; j < len - 1; j++)
////		{
////			*(arr + j) = *(arr + j + 1);
////		}
////		*(arr + len - 1) = tmp;
////	}
////
////}
//int main()
//{
//	char arr[] = "abcdef";
//		move(arr, 2);
//		printf("%s\n", arr);
//	return 0;
//}
//判断两个字符，看一个字符是否是另一个字符旋转出来的
#include<stdio.h>
#include<assert.h>
#include<string.h>
void reverse(char*left, char*right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;

	}

}
void left_move(char*arr, int k)//三步翻转法
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr,arr+k-1);//逆序左边
	reverse(arr+k,arr+len-1);//逆序右边
	reverse(arr,arr+len-1);//逆序整体
}
int move(char *s1, char*s2)
{
	int len = strlen(s1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		left_move(s1, 1);
		int ret = strcmp(s1, s2);
		if (ret == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[]=  "cdefab";
	int ret = move(arr1,arr2);
	if (ret == 1)
		printf("YES\n");
	else printf("NO\n");
	return 0;
}