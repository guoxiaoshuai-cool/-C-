//#include <stdio.h>
//int main()
//{
//	int i,j,k;
//	printf("\n");
//	for(i=1;i<5; i++)
//	
//	for(j=1;j<5; j++)
//	
//	for(k=1;k<5; k++)
//	
//		if(j!=k&& k!=i&& i!=j){
//		printf(" %d%d%d  ",i,j,k);
//	
//	
//	
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr1[100] = { 0 };
	int arr2[5000] = { 0 };
	int m;
	scanf("%d", &m);
	int i = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
		
	}
	for (i = 0; i < m; i++)
	{
		int num = arr1[i];
		while(num != 1)
		{
			if (num % 2)
			{
				num = 3 * num + 1;
				arr2[num] = 1;
			}
			else
			{
				num = num / 2;
				arr2[num] = 1;
			}
				
		}
	}
	int arr3[100] = { 0 };
	int j = 0;
	for (i = 0; i < m; i++)
	{
		if (arr2[arr1[i]] == 0)
		{
			arr3[j] = arr1[i];
			j++;
		}
	}
	int a, b, t;
	for (a = 0; a < j - 1; a++)
	{
		for (b = 0; b < j - 1; b++) {
			if (arr3[b] < arr3[b + 1])
			{
				t = arr3[b];
				arr3[b] = arr3[b + 1];
				arr3[b + 1] = t;
			}
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d", arr3[i]);
		if (i != j - 1)
			printf(" ");

	}
	return 0;
}