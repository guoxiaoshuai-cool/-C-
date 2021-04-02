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
////	int* p = arr;//数组名，首元素的地址
////	int i = 0;
////	for(i = 0; i< 10; i++)
////	{
////		*(p+i) = 1;
////	}
////	return 0;
////}
////
////野指针
////#include<stdio.h>
////int main()
////{
////	/*int a ;*///局部变量不初始化，默认是随机值
////	int *p;//局部的指针变量，就被初始化随机值
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
//	*p = 20;//局部变量不初始化，默认为随机值
//	return 0;
//}
//如下：数组越界导致的野指针问题
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
//无法返回地址
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
//	int* p =NULL;//NULL 用来初始化指针的，给指针赋值。
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
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int fib(int m)
//{
//	int f3 = 0;
//	if( 1 == m || 2 == m)
//
//		return 1;
//	else
//	{
//	int f1 = 1;
//	int f2 = 1;
//	int i = 0;
//	for(i = 3; i<=m; i++)
//	{
//		f3 = f2 + f1;
//		f1 = f2;
//		f2 = f3;
//	}
//	}
//	return f3;
//}
//
//int mian()
//{
//	int n,r;
//	int sum =0;
//	int j = 0;
//	printf("input a number:");
//	scanf("%d",&n);
//	printf("\n");
//	
//	for(j = 1; j<=n; j++)
//	{
//	   r = fib(j);
//	   sum = r+sum;
//	   printf("第%d个数是%d\n",j,r);
//	}
//	
//	printf("sum = %d\n",sum);
//	return 0;
//}
//

//读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
//
//输入格式：
//每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10
//​100
//​​ 。
//
//输出格式：
//在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。
//
//输入样例：
//1234567890987654321123456789
//输出样例：
//yi san wu

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int l = 0;
//	int i =0;
//	int sum = 0;
//	char arr[101];
//	int str[8];
//	int count = 0;
//	printf("input a sting number:");
//	gets(arr);
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
//			case 0:printf("LING");break;
//			case 1:printf("YI");break;
//			case 2:printf("ER");break;
//			case 3:printf("SAN");break;
//			case 4:printf("SI");break;
//			case 5:printf("WU");break;
//			case 6:printf("LIU");break;
//			case 7:printf("QI");break;
//			case 8:printf("BA");break;
//			case 9:printf("JIU");break;
//			default:printf("enter data error\n");break;
//			}
//			if(i>0)
//				printf(" ");
//		}
//		return 0;
//	}
//#include<stdio.h>
//int main()
//{
//char ch[100];
//int i = 0;
////scanf("%s",ch);
//gets(ch);
//
//for(i = 0; i<100; i++)
//{
//printf("%d  ",ch[i]);
//}
//return 0;
////}				
//#include<stdio.h>
//void Init(int arr[],
//int main()
//{
//	
//	int arr[10]={0};
//	int sz =sizeof(arr)/sizeof(arr[0]);
//	printf("%d",sz);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#define N 100
//int Inverse(char str1[], char str2[][N]);
//int main()
//{
//   char str1[N],str2[N][N],a;
//   int i=0,j;
//   gets(str1);
//   //a=str1[strlen(str1)-1];                //将字符串在结尾处的标点符号保存起来。
//   //str1[strlen(str1)-1]='\0';             //将str1数组变成了没有标点符号的字符串，由此排除了标点符号的干扰。
//   j=Inverse(str1,str2);
//   for(i=j;i>0;i--)
//   {
//     printf("%s",str2[i]);
//   }
// /*  printf("%s%c\n",str2[i],a);*/
//   return 0;
//}
//
//int Inverse(char str1[], char str2[][N])   //此函数的功能是将输入的一维数组每个单词拆开存进二维数组中，返回值为单词个数。
//{
//   //int len=strlen(str1);
//   int i=0,j=0,k=0;
//   while(str1[i]!='\0')
//   {
//     k=0;
//     while(str1[i]!=' '&&str1[i]!='\0')
//     {
//      str2[j][k]=str1[i];
//      k++;
//      i++;
//     }
//     if(str1[i]=='\0') break;
//     str2[j][k]='\0';
//     j++;
//     i++;
//   }
//   return j;
//}

//
//	
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	 int i=0;
//    char a[100];
//    fgets(a, 80, stdin);
//   
//    a[strlen(a)-1]='\0';
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

//求一个数二进制表示数的二进制补码中的一的个数。

//#include<stdio.h>
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//   while(n)
//   {
//	   n =n&(n-1);//高效的方法
//	   count++;
//   }
//	//int i = 0;
//	///*for(i = 0; i<32 ; i++)
//	//{
//	//	if(((n >>i)& 1) == 1)
//	//	{
//	//		count++;
//	//	}
//	//}*/
//
//	//while(n)
//	//{
//	//	if(n % 2 ==1)
//	//	{
//	//		count++;
//	//	}
//	//	n = n / 2;
//	//}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int count = count_bit_one(a);
//	printf("count = %d\n",count);
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int get_diff_bit(int m, int n)
//{
//	int count = 0;
//	int tmp = m^n;
//	while(tmp)
//	{
//		tmp = tmp & (tmp-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int count = 0;
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	 count = get_diff_bit(m, n);
//	printf("count = %d\n", count);
//   return 0;
//}
//#include<stdio.h>
//void print(int n)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for(i = 30; i>= 0; i -= 2)
//	{
//     printf("%d ", (n>> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for(i = 30; i>= 0; i -= 2)
//	{
//     printf("%d ", (n>> i) & 1);
//	}
//
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//void print(int *p, int sz)
//{
//	int i = 0;
//	for(i = 0; i< sz; i++)
//	{
//		printf("%d",*(p+i));
//	}
//}
//int mian()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr ,sz);
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//	while(left<right)
//	{
//	int  tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//		left++;
//	right--;
//}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}
//#include<stdio.h>
//int DigitSum(unsigned int num)
//{
//	if(num > 9)
//	{
//		return DigitSum(num / 10) + num %10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret = %d\n",ret);
//	return 0;
//}
//计算N^K
//#include<stdio.h>
//double pow(int n, int k)
//{
//	if(k <0)
//		return (1.0/(pow(n,-k)));
//	else if(k == 0)
//		return 1;
//	else
//		 return n*pow(n, k-1);
//}
//
//int main()
//{
//	double ret = 0;
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	 ret = pow(n, k);
//	printf("ret = %lf\n",ret);
//	return 0;
//
//}








 