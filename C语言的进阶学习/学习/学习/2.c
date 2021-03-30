#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fib(int m)
{
	int f3 = 0;
	if( 1 == m || 2 == m)

		return 1;
	else
	{
	int f1 = 1;
	int f2 = 1;
	int i = 0;
	for(i = 3; i<=m; i++)
	{
		f3 = f2 + f1;
		f1 = f2;
		f2 = f3;
	}
	}
	return f3;
}