//1028 人口普查(20 分)
//某城镇进行人口普查，得到了全体居民的生日。现请你写个程序，找出镇上最年长和最年轻的人。
//这里确保每个输入的日期都是合法的，但不一定是合理的——假设已知镇上没有超过 200 岁的老人，
//而今天是 2014 年 9 月 6 日，所以超过 200 岁的生日和未出生的生日都是不合理的，应该被过滤掉。
//输入格式：
//输入在第一行给出正整数 N，取值在(0, 10	5]；随后 N 行，每行给出 1 个人的姓名
//（由不超过 5 个英文字母组成的字符串）、
//以及按 yyyy / mm / dd（即年 / 月 / 日）格式给出的生日。题目保证最年长和最年轻的人没有并列。
//输出格式：
//在一行中顺序输出有效生日的个数、最年长人和最年轻人的姓名，其间以空格分隔。
//输入样例：
//5
//John 2001 / 05 / 12
//Tom 1814 / 09 / 06
//Ann 2121 / 01 / 30
//James 1814 / 09 / 05
//Steve 1967 / 11 / 20
//输出样例：
//3 Tom John


//解题思路：要求找出最年长人和最年轻人的姓名和符合的人数，本题应该先解决人口信息的定义和存储问题，我采用定义结构体类型和变量，
//首先定义每个人的信息，姓名，生日的年月日；然后对其生日进行判断，找出符合要求的人数，将不符合要求的识别出来
///输出符合的人数；其次将所有人的年龄进行从小到大排序，输出最小一个人的名字，遍历数组，输出最大一人的名字，即完成要求；

//AC代码如下
#if 0
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
	int year, month, day;
	char name[6];
}person;
int cmp(const void *p1, const void *p2)//从大到小排序
{
	person a = *((person*)p1);
	person b = *((person*)p2);
	if (a.year != b.year) return a.year - b.year;
	else if (a.month != b.month) return a.month - b.month;
	else return a.day - b.day;
}
int main()
{
	int N, count = 0;
	scanf("%d", &N);
	person p[10] ;//本来想用N来作为数组个数的，但vs会报错，gcc不会，不能定义为p[]={0}
	for (int i = 0; i < N; i++)//输入信息
	{
		int a1 ;
		int a2;
		scanf("%s %d/%d/%d", &p[i].name, &p[i].year, &p[i].month, &p[i].day);
		a1 = p[i].year > 2014 ? 0 : 1;//判断是否超过了规定年龄出生，用a1表示。
		if (p[i].year == 2014)
		{
			a1 = p[i].month > 9 ? 0 : 1;
			if (p[i].month == 9)
			{
				a1 = p[i].day > 6 ? 0 : 1;
			}
		}
		a2= p[i].year <1814 ? 0 : 1;//排除超过两百岁的，用a2表示。
		if (p[i].year == 1814)
		{
			a2 = p[i].month < 9 ? 0 : 1;
			if (p[i].month == 9)
			{
				a2 = p[i].day < 6 ? 0 : 1;
			}
		}
		if (a1&&a2)
			count++;
		else p[i].year = 3000;
		
	}
	printf("%d", count);
	qsort(p, N, sizeof(person), cmp);//从大到小排序
	
	if (count != 0)//没有就不输出
	{
		printf(" %s ", p[0].name);
		for (int i = 0; p[i].year != 3000 && i < N; i++)
		{
			if (p[i + 1].year == 3000 || i == N - 1)
			{
				printf("%s", p[i].name);
			}
		}
	}

	return 0;
}
#endif 