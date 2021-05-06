//PAT乙级测试题10361跟奥巴马一起学编程
//AC代码如下：
#if 0
#include<stdio.h>
int main()
{
	int N =0;
	char C;
	scanf("%d %c", &N, &C);
	int i = 0, j = 0;
	for (i = 0; i < (N + 1) / 2; i++)//打的行数
	{
		if (i==0||i==(N+1)/2-1)
		{
			for (j = 0; j < N; j++)
			{
				printf("%c", C);
			}
		}
		else {
			for (j = 0; j < N; j++)
			{
				if (j == 0 || j == N - 1)
					printf("%c", C);
				else  printf(" ");
			}
			
		}
		printf("\n");
	}
	
	return 0;
}
#endif

//代码总结：这是一个简单的代码输入与输出的题目，注意行数列数与输入边长的关系即可求出来；