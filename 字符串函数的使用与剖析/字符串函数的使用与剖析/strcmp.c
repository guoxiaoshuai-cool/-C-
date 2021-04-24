//strcmp函数的分析与实现 char * strcat ( char * destination, const char * source );
//标准规定：
//第一个字符串大于第二个字符串，则返回大于0的数字
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字
//那么如何判断两个字符串？
//比较两个字符串的大小
//函数自定义实现如下：
#if 0
#include<stdio.h>
#include<assert.h>
my_strcmp(const char*str1, const char* str2)
{
	assert(str1&&str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;//等于
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2) return 1;//大于
	else return -1;//小于
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abqwe";
	int ret = my_strcmp(p1, p2);
	printf("ret=%d\n", ret);

	return 0;

}
#endif