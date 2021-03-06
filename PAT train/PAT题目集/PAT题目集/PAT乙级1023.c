//1023 组个最小数(20 分)
//给定数字 0 - 9 各若干个。你可以以任意顺序排列这些数字，但必须全部使用。目标是使得最后得到的数尽可能小（注意 0 不能做首位）。
//例如：给定两个 0，两个 1，三个 5，一个 8，我们得到的最小的数就是 10015558。
//现给定数字，请编写程序输出能够组成的最小的数。
//输入格式:输入在一行中给出 10 个非负整数，顺序表示我们拥有数字 0、数字 1、……数字 9 的个数。整数间用一个空格分隔。
//10 个数字的总个数不超过 50，且至少拥有 1 个非 0 的数字。

//代码思路：要输出一个最小的数字，且第一位数字非零，其他为从小到大进行排序，即输出了最小的数字

//AC代码如下：
#if 0
#include <stdio.h>
int main()
{
	int arr[11] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);//注意别打错了，经常打错函数，晕
	}
	int j = 1;//先输出一个非零的数字，然后再将其他数字按序输出即可
	while (arr[j] == 0)
	{
		j++;
	}
	printf("%d", j);
	arr[j]--;//已经输出一个数了，自减一个数字
	for (int i = 0; i < 10; i++)
	{
		while (arr[i]-- >0)
		{
			printf("%d", i);
	   }
	}
	return 0;
}
#endif


//代码总结，这题看似简单，实则思路很巧，以上为目前想到的最优解了.


