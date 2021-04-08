#define _CRT_SECURE_NO_WARNINGS 1
//struct结构体关键字 stu 结构体标签 struct stu - 结构体类型 
#include<stdio.h>

//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age ;
//	char tele[12];
//	char sex[5];
//}stu;//定义一个结构体类型（不占内存空间）
//void print1(stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age:  %s\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex:  %s\n", tmp.sex);
//	return ;
//}
//void print2(stu* ps)//此种方法更好些
//{
//	printf("name: %s\n", ps->name);//针对结构体指针
//	printf("age:  %s\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex:  %s\n", ps->sex);
//	return ;
//}
//int main()
//{
//	stu s = {"张三",20,"1455445","男"};  //局部变量 定义的结构体变量
//	print1(s);
//	print2(&s);//传结构体的地址过去
//				//创建结构体变量			
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[30];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//    char *pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = {"hehe", {100, 'w', "hello word", 3.14}, arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n",t.pc);
//	return 0;
//}//(.)结构体访问的操作符
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	printf("%d\n",ret);//传参，从右向左传参，
//	return 0;
//
//}
//结构体传参传的是地址。
//函数栈帧的创建和销毁 函数的栈帧的创建和销毁


// 实用调试技巧
//debug和Release的介绍
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for(i = 0; i <100; i++)
//	{
//		printf("%d  ", i);
//	}
//	system("pause");
//	return 0;
//
//}
//release 发布
//rekease版本和Debug的差异，Debug 含有调试程序，把调试信息记录起来，所以调试
//内存大

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (int i = 0; i <= 12; i++)//c++的写法
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char*  my_strcpy(char* dest, const char* src)//目的地
//{
//	char* ret = dest;
//	/*if(dest!=NULL&& src != NULL)*/
//	/*{*/
//	assert(dest != NULL);//断言 保证指针的有效性
//	assert(src != NULL);//断言
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//	/*while (*src != '\0');
//	{
//	*dest = *src;
//	src++;
//	dest++;
//	}
//	*dest = *src;
//	*/
//	/*}*/
//}
//int main()
//{
//	char arr1[] = "************";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	const int num = 10;
//	 int* const p = &num;//const放在指针变量右边是修饰的是指针变量p本身，p不能被改变； 
//	*p = 20;//const放在指针变量左边时，修饰的是*p，也就是说：不能通过p来改变*p（numm)的值。
//	printf("%d\n", num);
//	return 0;
//}
//int mian()
//{
//
//	int a = 0;
//	int *p = &a;
//	assert(p != NULL);
//	return 0;
//}
#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//常见的三类错误，编译型错误，链接型错误，运行时错误

