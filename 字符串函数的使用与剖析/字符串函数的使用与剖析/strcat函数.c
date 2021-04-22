//strcat 函数的分析及实现  char * strcat ( char * destination, const char * source );
//函数的介绍及注意事项
//Appends a copy of the source string to the destination string.The terminating null character in
//destination is overwritten by the first character of source, and a null - character is included at the end of
//the new string formed by the concatenation of both in destination.
//源字符串必须以 '\0' 结束。
//目标空间必须有足够的大，能容纳下源字符串的内容。
//目标空间必须可修改。
//字符串自己给自己追加，如何？
//函数自定义实现代码如下
#if 0
#include<stdio.h>
#include<string.h>
#include<assert.h>
char * my_strcat( char* dest,const char*src)
{
	char*ret = dest;
	assert(dest != NULL);
	assert(src);//1.找到目标字符串'\0' 
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)//2.追加
	{
		;
	}
	return ret;//返回原来的首地址
}
int main()
{
	char arr1[30] = "hello";//定义的数组空间必须足够大
	char arr2[] = "word";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}

#endif