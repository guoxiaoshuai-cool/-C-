//strcpy函数的分析及实现
//char* strcpy(char * destination, const char * source );

//代码自定义实现如下：使用指针的形式实现
#if 0
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcpy( char* dest,const char* src)//要实现这个函数，要拷贝的函数必须要有‘\0'
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*dest++ = *src++)//拷贝src指向的字符串到dest指向的空间，包含'\0'
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";//arr1的字符长度必须大于arr2；
	//char arr2[] = { 'b','i','t' };//不能实现这个函数，没有\0，可能会造成数组越界
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;

}
#endif
//strcpy的介绍以及注意点
//Copies the C string pointed by source into the array pointed by destination, including the terminating null
//character(and stopping at that point).
//源字符串必须以 '\0' 结束。
//会将源字符串中的 '\0' 拷贝到目标空间。
//目标空间必须足够大，以确保能存放源字符串。
//目标空间必须可变。
//学会模拟实现。