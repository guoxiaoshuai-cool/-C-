//实现strlen函数size_t strlen ( const char * str );
//1.计数器的方法
//2.递归
//指针，指针
//
//用指针的形式实现strlen函数
#if 0
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;//返回类型是整型
}
int main()
{
	int len = my_strlen("abcdef");
	printf("%d\n", len);
}//size_t无符号整型；size_t strlen( const char *string );
#endif
//函数的介绍及注意事项
//字符串已经 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0' 前面出现的字符个数（不包含 '\0' )。
//参数指向的字符串必须要以 '\0' 结束。
//注意函数的返回值为size_t，是无符号的（ 易错 ）
//学会strlen函数的模拟实现