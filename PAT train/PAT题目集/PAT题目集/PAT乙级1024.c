//1024 科学计数法(20 分)
//科学计数法是科学家用来表示很大或很小的数字的一种方便的方法，其满足正则表达式[+-][1 - 9].[0 - 9] + E[+-][0 - 9] + ，
//即数字的整数部分只有 1 位，小数部分至少有 1 位，该数字及其指数部分的正负号即使对正数也必定明确给出。
//现以科学计数法的格式给出实数 A，请编写程序按普通数字表示法输出 A，并保证所有有效位都被保留。
//输入格式：
//每个输入包含 1 个测试用例，即一个以科学计数法表示的实数 A。该数字的存储长度不超过 9999 字节，且其指数的绝对值不超过 9999。
//输出格式：
//对每个测试用例，在一行中按普通数字表示法输出 A，并保证所有有效位都被保留，包括末尾的 0。

//输入样例 1：
//+ 1.23400E-03
//输出样例 1：
//0.00123400
//输入样例 2：
//- 1.2E+10
//输出样例 2：
//- 12000000000

//解题思路：这题是一道复杂的读入的题目，我们首先要解决读入问题，了解正则表达式，scanf可以用正则表示
//式来控制输入。将输入分为三个部分，首先是符号位，要先读入符号，用sgn表示；其次是有效数字，可用数组arr表示
//因为是科学计数法的表现形式，然后可以读入小数点前一位的数字，判断他是否是0/1，用arr[0]表示，接着读入小数部分,小数点后的第一个数字用a[1]实现
//最后是指数部分，用E来表示，完成这三步则完成了要求。

//AC代码如下
#if 0
#include<stdio.h>
#include<string.h>
int main()
{
	int E ;
	int j = 2;
	char arr[10001] = { 0 }, sgn;
	scanf("%[+ -]%[1-9].%[0-9]E%d", &sgn, arr, arr + 1, &E);
	int len = strlen(arr);
	if (sgn == '-') printf("-");
	if (E <0)
	{
		printf("0.");
		while (++E < 0)
		{
			printf("0");
		}
		printf("%s", arr);
		
	}
	else {
		
		printf("%c%c", arr[0], arr[1]);
		while (--E > 0)
		{
			arr[j] != '\0' ? printf("%c", arr[j++]) : printf("0");
		}
		if (j < len) printf(".");
		while (j < len)
			printf("%c", arr[j++]);
	}

	return 0;
}

#endif

//网上大神的参考代码如下：
#if 0
#include <stdio.h>
#include <string.h>
int main() {
	int index, j = 2;
	char a[10001] = { 0 }, sgn;
	scanf("%[+-]%[1-9].%[0-9]E%d", &sgn, a, a + 1, &index);	//正则表达式控制输入
	if (sgn == '-') printf("-");
	if (index < 0) {
		printf("0.");
		while (++index < 0) printf("0");
		printf("%s", a);
	}
	else {
		printf("%c%c", a[0], a[1]);
		while (--index > 0) a[j] != '\0' ? printf("%c", a[j++]) : printf("0");
		if (j < strlen(a)) printf(".");
		while (j < strlen(a)) printf("%c", a[j++]);
	}
	return 0;
}
#endif

//代码总结，参考的是大神的代码，自己也尝试写了下，发现了许多问题。比如指数E要考虑两种情况，只能
//先考虑小于零的情况，再考虑不等于零的情况，不然测试点2，4，5过不去。（我觉得这里出现的bug，因为
//已经考虑了E=0的情况了，换了一下就能通过所有测试点）
