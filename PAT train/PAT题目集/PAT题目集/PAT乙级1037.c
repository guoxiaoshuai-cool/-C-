//1037 在霍格沃茨找零钱 (20 分)
//如果你是哈利·波特迷，你会知道魔法世界有它自己的货币系统 —— 就如海格告诉哈利的：
//“十七个银西可(Sickle)兑一个加隆(Galleon)，二十九个纳特(Knut)兑一个西可，很容易。
//”现在，给定哈利应付的价钱 P 和他实付的钱 A，你的任务是写一个程序来计算他应该被找的零钱。
//输入格式：
//输入在 1 行中分别给出 P 和 A，格式为 Galleon.Sickle.Knut，其间用 1 个空格分隔。这里 Galleon 是 [0, 10​7] 区间内的整数，
//Sickle 是 [0, 17) 区间内的整数，Knut 是 [0, 29) 区间内的整数。
//输出格式：
//在一行中用与输入同样的格式输出哈利应该被找的零钱。如果他没带够钱，那么输出的应该是负数。
//输入样例 1：
//10.16.27 14.1.28
//输出样例 1：
//3.2.1
#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int P, A, G, S, K, count;
	scanf("%d.%d.%d", &G, &S, &K);
	P = (G * 17 + S) * 29 + K;//应该付的钱
	scanf("%d.%d.%d", &G, &S, &K);
	A = (G * 17 + S) * 29 + K;//实际付的钱
	count = A - P;//付钱的差值
	if (count < 0)
	{
		printf("-");
		count = -count;
	}
	printf("%d.%d.%d", count / 29 / 17, count / 29 % 17, count % 29);
	printf("\n");
	return 0;
}
#endif