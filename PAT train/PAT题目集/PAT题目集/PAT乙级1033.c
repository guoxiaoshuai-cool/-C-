//解题思路：
//旧键盘打字，输入一行坏键和一行应该输入的文字，输出结果文字。解题的关键在于将两行输入的字符串
//用数组表示出来，对比两行键的差异。首先判断上档键是否是坏键，然后遍历比较两数组，有相同的数则不输出
//不相同则判断上档键是否是坏键，不是则输出,toupper（）函数是大小写转化函数
//AC代码如下：
#if 0
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char arr1[41] = { 0 };
	char arr2[10000] = { 0 };
	gets(arr1);
	gets(arr2);
	int temp1 = 0;
	for (int i = 0; arr1[i] != '\0'; i++)//遍历arr1,判断上档键是否是坏键
	{
		if (arr1[i] == '+')
			temp1 = 1;
	}
	for (int i = 0; arr2[i] != '\0'; i++)//遍历arr2
	{
		int temp2 = 0;//临时变量，判断arr2中是否有arr1
		for (int j = 0; arr1[j] != '\0'; j++)
		{
			if (arr1[j] == arr2[i] || arr1[j] == toupper(arr2[i]) || arr2[i] == toupper(arr1[j]))
			{
				temp2=1;
					break;
			}
		}
		if (temp2 == 0)//arr1[i]!=arr2[j]
		{
			if (arr2 >= 'A'&&arr2 <= 'Z')//判断上档键是否是坏键，是则大写字母不能输出
			{
				if (temp1 == 0)
				{
					printf("%c", arr2[i]);
				}
			}
			else printf("%c", arr2[i]);
		}

	}

	return 0;
	
}
#endif
//#代码总结：这道题不算太难，主要是先判断第二组字符串是否与第一组字符串有相同的数，有则这个键必然是坏键；
//其次，在不相同的情况下，判断上档键是否是坏键，如果是坏键，则大写字母不能输出；