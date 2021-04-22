//#define _CRT_SECURE_NO_WARNINGS 1
////1001 害死人不偿命的(3n+1)猜想 
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//   if(scanf("%d",&n))
//   {
//    while(n != 1)
//    {
//        if(n % 2 == 0)
//            n = n/2;
//        else n = (3*n+1)/2;
//        i++;
//    }
//   }
//   printf("%d",i);
//}
//
//
////1002 写出这个数
////读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//
//int main()
//{
//	int l = 0;
//	int i =0;
//	int sum = 0;
//	char arr[101];
//	int str[8];
//	int count = 0;
//	if(scanf("%s",arr))
//    {
//    getchar();
//    }
//	l = strlen(arr);
//	for(i = 0;i < l; i++)
//	{
//		sum =sum+(arr[i]-'0');
//	}
//
//	
//	for(i = 0; i<3; i++) 
//	{
//		if(sum>0)
//		{
//			str[i] = sum%10;
//			sum = (sum - str[i])/10;
//			count++;
//		}
//	}
//		for(i =count-1; i>=0; i--)
//		{
//			switch(str[i])
//			{
//			case 0:printf("ling");break;
//			case 1:printf("yi");break;
//			case 2:printf("er");break;
//			case 3:printf("san");break;
//			case 4:printf("si");break;
//			case 5:printf("wu");break;
//			case 6:printf("liu");break;
//			case 7:printf("qi");break;
//			case 8:printf("ba");break;
//			case 9:printf("jiu");break;
//			default:printf("enter data error\n");break;
//			}
//			if(i>0)
//				printf(" ");
//		}
//		return 0;
//	}
//1009 说反话
//给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出
//测试点三一直过不去，多少有点问题，以后不知道我会不会。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	 int i=0;
//    char a[100];
//   fgets(a, 80, stdin);
//   
//   a[strlen(a)-1]='\0';
//    for(i=strlen(a)-1; i>=0; i--){
//         if(a[i]==' '){
//             printf("%s", &a[i+1]);
//             printf(" ");
//             a[i]='\0';
//         }
//        if(i==0)
//            printf("%s", &a[i]);
//    }
//    return 0;
//}
//1004 成绩排名 
//读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//typedef struct stu
//{
//	char name[20];
//	char number[20];
//	int score ;
//}stu;
//
//int main()
//{
//	stu arr[100];
//	int n = 0;
//	int max = 0;
//	int min = 0;
//	int i = 0;
//	if(scanf("%d",&n))
//	for (i=0; i<n; i++)
//	{
//		if(scanf("%s%s%d",arr[i].name, arr[i].number, arr[i].score))
//		if(arr[i].score < arr[min].score)
//			min=i;
//		if(arr[i].score > arr[max].score)
//			max = i;
//	}
//	printf("%s%s\n",arr[max].name,arr[max].number);
//	printf("%s%s\n",arr[min].name, arr[min].number);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//typedef struct stu
//{
//	char name[12];
//	char number[12];
//	int score ;
//}stu;
//
//int main()
//{
//	int n = 0;
//	int max = 0;
//	int min = 0;
//	int i = 0;
//    stu arr[1000];
//	if(scanf("%d",&n))
//	for (i=0; i<n; i++)
//	{
//		if(scanf("%s %s %d",&arr[i].name, &arr[i].number,&arr[i].score))
//		if(arr[i].score < arr[min].score)
//			min=i;
//		if(arr[i].score > arr[max].score)
//			max = i;
//	}
//	printf("%s %s\n",arr[max].name,arr[max].number);
//	printf("%s %s\n",arr[min].name, arr[min].number);
//	return 0;
//}
//005 继续(3n + 1)猜想
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr1[300] = { 0 };
//	int arr2[6000] = { 0 };
//	int m;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//
//
//
//	}
//	for (i = 0; i < m; i++)
//	{
//		int num = arr1[i];
//		while (num != 1)
//		{
//			if (num % 2)
//			{
//				num = 3 * num + 1;
//				arr2[num] = 1;
//			}
//			else
//			{
//				num = num / 2;
//				arr2[num] = 1;
//			}
//
//		}
//	}
//	int arr3[300] = { 0 };
//	int j = 0;
//	for (i = 0; i < m; i++)
//	{
//		if (arr2[arr1[i]] == 0)
//		{
//			arr3[j] = arr1[i];
//			j++;
//		}
//	}
//	int a, b, t;
//	for (a = 0; a < j - 1; a++)
//	{
//		for (b = 0; b < j - 1; b++) {
//			if (arr3[b] < arr3[b + 1])
//			{
//				t = arr3[b];
//				arr3[b] = arr3[b + 1];
//				arr3[b + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d", arr3[i]);
//		if (i != j - 1)
//			printf(" ");
//
//	}
//	return 0;
//}






//1006 换个格式输出整数
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int a, b, c = 0;
//	int i = 0;
//	if (scanf("%d", &n))
//	if (n < 1000)
//	{
//		a = n / 100;
//		b = (n % 100) / 10;
//		c = n % 10;
//	}
//	while (a > 0)
//	{
//		printf("B");
//		a--;
//	}
//	while (b > 0)
//	{
//		printf("S");
//		b--;
//	}
//	for (i = 1; i <= c; i++)
//	{
//		printf("%d", i);
//	}
//	printf("\n");
//	return 0;
//}



//1007 素数对猜想

//#include <stdio.h>
//#include<math.h>
//int ss(int x)
//{
//	if (x == 1 || x == 2 || x == 3)
//		return 1;
//	for (int j = 2; j <= sqrt(x); j++)
//	{
//		if (x%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int n, count = 0;
//	if(scanf("%d", &n))
//	for (int i = 1; i <= n - 2; i++)
//	{
//		if (ss(i))
//			if (!ss(i + 1))
//				if (ss(i + 2))
//					count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//1008 数组元素循环右移问题
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int arr[200];
//	if (scanf("%d %d", &m, &n))
//		n = n % m;
//	for (i = 0; i < m; i++)
//	{
//		if (scanf("%d", &arr[i]));
//	}
//	int k = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		k = arr[m - 1];
//		for (j = m - 1; j > 0; j--)
//		{
//			arr[j] = arr[j - 1];
//		}
//		arr[0] = k;
//	}
//	for (i = 0; i < m; i++)
//	{
//		if (i == 0)
//		{
//			printf("%d", arr[i]);
//		}
//		else
//		{
//			printf(" %d", arr[i]);
//		}
//	}
//	printf("\n");
//	return 0;
//}



////1010 一元多项式求导
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 1;
//	int j = 1;
//	while(1)
//	{
//		int a = 0;
//		if (scanf("%d%d", &m, &n))
//		 a = getchar();
//		if (n != 0)
//		{
//			if (i == 1)
//			{
//				printf("%d %d", m*n, n - 1);
//				i = 0;
//			}
//			else 
//		    { 
//			   printf(" %d %d", m*n, n - 1);
//			   j = 0;
//		    }
//		}
//		
//			
//		if (a =='\n')break;
//
//	}
//	if (j == 1)
//	{
//		printf("0 0");
//	}
//	printf("\n");
//	return 0;
//	
//}
//1011 A + B 和 C
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	long long a[10], b[10], c[10];
//	if(scanf("%d", &n))
//		for (i = 1; i <= n; i++)
//		{
//			if (scanf("%lld%lld%lld", &a[i], &b[i], &c[i]));
//		}
//	    for (i = 1; i <= n; i++)
//	    {
//		  if (a[i] + b[i] > c[i])
//			 printf("Case #%d: ture\n", i);
//		   else
//			 printf("Case #%d: false\n", i);
//
//	      }
//
//	return 0;
//}



////1012 数字分类
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int arr[1000] = { 0 };
//	int A1 = 0, A2 = 0, A3 = 0, A4 = 0, A5 = 0;
//	int i = 0;
//	int count = 0; int count1 = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] % 10 == 0) A1 += arr[i];
//		if (arr[i] % 5 ==  1)  A2 += arr[i] * pow(-1, count++); 
//		if (arr[i] % 5 ==  2)  A3++;
//		if (arr[i] % 5 == 3) { A4 += arr[i]; ++count1; }
//		if (arr[i] % 5 ==  4 && arr[i] > A5) A5 = arr[i];
//	}
//	A1 ? printf("%d ", A1) : printf("N");
//	count  ? printf("%d ", A2) : printf("N");
//	A3 ? printf("%d ", A3) : printf("N");
//	A4 ? printf("%.1f ", A4*1.0/count1) : printf("N");
//	A5 ? printf("%d\n", A5) : printf("N\n");
//	return 0;
//
//}

////1013 数素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0,j = 0;
//	int k = 0;
//	int m = 0, n = 0;
//	int cunt = 0;
//	scanf("%d%d", &m, &n);
//	for (i = 1; k < n; i+=2)
//	{
//		int num = i;
//		int flag = 1;
//		int b = sqrt(num);
//		for (j = 2; j <=b; j++)
//		{
//			if (num %j == 0)
//			{
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			k++;
//			if (k >= m)
//			{
//				printf("%d", num);
//				cunt++;
//				if (cunt % 10 == 0)
//					printf("\n");
//				else if (k != n)
//					printf(" ");
//
//			}
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[61],  arr2[61], arr3[61],  arr4[61];
//	char day = 0;
//	int hour = 0;
//	int min = 0;
//	int i = 0;
//	scanf("%s%s%s%s", arr1, arr2, arr3, arr4);
//		while(i<strlen(arr1)&&i<strlen(arr2))
//		{
//		  if (arr1[i] == arr2[i] && (arr1[i] >= 'A' && arr1[i] <= 'G'))
//		{
//			day = arr1[i];
//			break;
//		}
//		  i++;
//	    }
//		i++;
//	char week[7][4] = { "MON","TUE","WES","THU","FIR","SAT","SUN" };
//		printf("%s", week[day - 'A']);
//		for (; i < strlen(arr1) && i < strlen(arr2); i++)
//		{
//			if (arr1[i] == arr2[i] && ((arr1[i] >= 'A' && arr1[i] <= 'N') || (arr1[i] >= '0'&&arr1[i] <= '9')))
//			{
//				if (arr1[i] > 'A' && arr1[i] < 'N')
//				{
//					hour = arr1[i] - 'A' +10;
//					break;
//				}
//				else if (arr1[i] >= '0'&&arr1[i] <= '9')
//				{
//					hour = arr1[i] - '0';
//					break;
//				}
//			 }
//		}
//		printf("%02d:", hour);
//		int j = 0;
//		while( j < strlen(arr3) && j < strlen(arr4))
//		{
//			if(arr3[j]==arr4[j]&&((arr3[j]<='Z'&&arr3[j]>='A')|| (arr3[j] <= 'z'&&arr3[j] >= 'a')))
//			{
//				min = j;
//				break;
//			}
//			j++;
//			/*if ((arr3[j] <= 'Z'&&arr3[j] >= 'A') || (arr3[j] <= 'z'&&arr3[j] >= 'a'))
//			{
//				j++;
//		     }*/
//		}
//		printf("%02d", min);
//	return 0;
//}



//1015 德才论
//#include<stdio.h>
//#include<stdlib.h>
////int Comp(const void *p1, const void *p2);//如果Comp()函数放在main后面就需要声明
//
//typedef struct {
//	int id;//准考证号 
//	int de, cai, total;//德分，才分，总分
//	int rank;//考生类别
//}Student;//试一下这个地方能否直接用数组
//
//int Comp(const void *p1, const void *p2) {
//	Student a = *(Student *)p1;
//	Student b = *(Student *)p2;
//	if (a.rank != b.rank)
//		return a.rank - b.rank;//如果a的rank小于b，则应该a排在前面
//	else if (a.total != b.total)
//		return b.total - a.total;//如果a的总分小于b，则a应该排在后面
//	else if (a.de != b.de)
//		return b.de - a.de;//如果a的德分小于b，则a应该排在后面
//	else if (a.id != b.id)
//		return a.id - b.id;//如果a的准考证号小于b，应该a排在前面
//}
//
//int main() {
//	Student stu[100000];//最多可能接收100000个考生信息
//	int num, low, high;//分别是考生数目，国家线和院线
//	int num_pass = 0;//过国家线人数
//	scanf("%d %d %d", &num, &low, &high);
//	for (int i = 0; i < num; i++) {
//		scanf("%d %d %d", &stu[i].id, &stu[i].de, &stu[i].cai);
//		stu[i].total = stu[i].de + stu[i].cai;//接收考生信息，计算总分
//		//考生分类
//		if (stu[i].de >= low && stu[i].cai >= low) {
//			num_pass++;
//			if (stu[i].de >= high && stu[i].cai >= high)//德分、才分皆过院线
//				stu[i].rank = 1;
//			else if (stu[i].de >= high)//德分过院线，但才分没过院线
//				stu[i].rank = 2;
//			else if (stu[i].de >= stu[i].cai)
//				stu[i].rank = 3;//德分都没过院线，但德分大于等于才分
//			else //德分没过院线
//				stu[i].rank = 4;
//		}
//		else
//			stu[i].rank = 5;
//	}
//
//	//对考生排序
//	qsort(stu, num, sizeof(Student), Comp);
//	printf("%d\n", num_pass);
//	for (int i = 0; i < num_pass; i++) {
//		printf("%d %d %d\n", stu[i].id, stu[i].de, stu[i].cai);
//	}
//	return 0;
//}

//1016 部分A + B
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[11] = { 0 }, b[11] = { 0 }, DA, DB;
//	int i = 0, sum1=0, sum2=0;
//	scanf("%s %c %s %c", a, &DA, b, &DB);
//	for ( i = 0; i < strlen(a); i++)
//	{
//		if (a[i] == DA)
//			sum1 = sum1 * 10 +( DA - '0');
//	}
//	for ( i = 0; i < strlen(b); i++)
//	{
//		if (b[i] == DB)
//			sum2 = sum2 * 10 +( DB - '0');
//	}
//	printf("%d", sum1 + sum2);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char A[1001] = { 0 };
//	int B = 0;
//	int Q = 0;
//	int R = 0;
//	scanf("%s%d", &A, &B);
//	for (int i = 0; A[i] != '\0'; i++)
//	{
//		Q = (R * 10 + A[i] - '0')/B;
//		if(!(strlen(A)&&Q==0&&i==0))
//		{
//			printf("%d", Q);
//		}
//		
//		R = (R * 10 + A[i] - '0') % B;
//	}
//	printf(" %d", R);
//	return 0;
//}

//018 锤子剪刀布 
//#include<stdio.h>
//int change(char c)
//{
//	if (c == 'B')
//		return 0;
//	else if (c == 'C')
//		return 1;
//	else if (c == 'J')
//		return 2;
//}
//int main()
//{
//	int n;
//	char mp[4] = { 'B','C','J' };
//	scanf("%d", &n);
//	char a, b;
//	int i, j;
//	i = j = 0;
//	int p1[4] = { 0 };
//	int p2[4] = { 0 };
//	int q1[4] = { 0 };
//	int q2[4] = { 0 };
//	int x, y;
//	while (n--)
//	{
//		getchar();
//		scanf("%c %c", &a, &b);
//		//getchar();
//		x = change(a);
//		y = change(b);
//		if ((x + 1) % 3 == y)
//		{
//			p1[0]++;
//			p2[2]++;
//			q1[x]++;
//		}
//		else if (x == y)
//		{
//			p1[1]++;
//			p2[1]++;
//		}
//		else
//		{
//			p1[2]++;
//			p2[0]++;
//			q2[y]++;
//		}
//	}
//	printf("%d %d %d\n", p1[0], p1[1], p1[2]);
//	printf("%d %d %d\n", p2[0], p2[1], p2[2]);
//	int xx = 0;
//	int yy = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (q1[i] > q1[xx])
//			xx = i;
//		if (q2[i] > q2[yy])
//			yy = i;
//	}
//	printf("%c %c\n", mp[xx], mp[yy]);
//	return 0;
//}

//1019
//#include<stdio.h>
//#include<stdlib.h>
//int cmp(const void * p1, const void * p2)
//{
//	return *(int *)p2 - *(int *)p1;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n[4] = { 0 };
//	while (1)
//	{
//		int i = 0;
//		int temp = num;
//		for (i = 0; num != 0; i++)
//		{
//			n[i] = num % 10;
//			num = num / 10;
//		}
//		int length = i;
//		qsort(n, length, sizeof(int), cmp);
//		int min = n[0] + n[1] * 10 + n[2] * 100 + n[3] * 1000;
//		int max= n[3] + n[2] * 10 + n[1] * 100 + n[0] * 1000;
//		num = max - min;
//		if (num == 0)
//		{
//			printf("%04d - %04d = %04d\n", temp, temp, num);
//			break;
//		}
//		else if (num == 6174)
//		{
//			printf("%04d - %04d = %04d\n", max, min, num);
//			break;
//		}
//		else
//			printf("%04d - %04d = %04d\n", max, min, num);
//	}
//	return 0;
//}

//1020 月饼
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct {
//	double num;
//	double price;
//	double unit_price;
//}moon;
//int cmp(const void * p1, const void*p2)
//{
//	moon d1 =* (moon*)p1;
//	moon d2 =* (moon*)p2;
//	if (d2.unit_price - d1.unit_price >= 0)
//		return 1;
//	else
//		return -1;
//		
//}
//int main()
//{
//	int n, max;
//	int i = 0;
//	moon moon_cake[100];
//	scanf("%d%d", &n, &max);
//	for (i=0;i<n;i++)
//	{
//		scanf("%lf", &moon_cake[i].num);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", &moon_cake[i].price);
//		moon_cake[i].unit_price = moon_cake[i].price / moon_cake[i].num;
//	}
//	qsort(moon_cake, n, sizeof(moon), cmp);
//	double residue_num = max;
//	double total = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (moon_cake[i].num <= residue_num)
//		{
//			total += moon_cake[i].price;
//			residue_num -= moon_cake[i].num;
//		}
//		else
//		{
//			total += residue_num * moon_cake[i].unit_price;
//			break;
//		}
//	}
//	printf("%3.2lf\n", total);
//	return 0;
//
//}

//1021 个位数统计
//请编写程序统计每种不同的个位数字出现的次数。例如：给定 N = 100311，则有 2 个 0，3 个 1，和 1 个 3。
//输入格式：
//每个输入包含 1 个测试用例，即一个不超过 1000 位的正整数 N。
//输出格式：
//对 N 中每一种不同的个位数字，以 D : M 的格式在一行中输出该位数字 D 及其在 N 中出现的次数 M。要求按 D 的升序输出。
//输入样例：100311
//输出样例：
//0 : 2
//1 : 3
//3 : 1
//代码实现如下
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[1001] = { 0 };
//	int count[10] = { 0 };
//	scanf("%s", arr1);
//	int i = 0;
//	for (i = 0; i < strlen(arr1); i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if (j == arr1[i] - '0')
//				count[j]++;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (count[i] != 0)
//			printf("%d:%d\n", i, count[i]);
//	}
//	return 0;
//}


////1022 D进制的A + B(20 分)
////输入两个非负 10 进制整数 A 和 B(≤230−1)，输出 A + B 的 D(1 < D≤10)进制数。
////输入在一行中依次给出 3 个整数 A、B 和 D。
////输出格式：输出 A + B 的 D 进制数。
////输入样例：123 456 8
//#include<stdio.h>
//int main()
//{
//	int A, B, D;
//	scanf("%d%d%d", &A, &B, &D);//输入三个整数
//	int temp = 0;
//	int num[100] = { 0 };//创建整形数组存放输出数据，开辟的空间应该大一点，不然造成数组越界；
//	temp = A + B;
//	int i = 0;
//	for ( i = 0; temp != 0; i++)
//	{
//		num[i] = temp % D;//取余
//		temp = temp / D;
//	}
//	if (A+B==0)//将A+B等于0的情况输出来，不然测试点2，3过不去
//	{
//		printf("0");
//	}
//	for (int j = i - 1; j >= 0; j--)
//	{
//		printf("%d", num[j]);//倒叙输出
//	}
//	return 0;
//
//}
////代码思路：
////1.将一个十进制数，输出为其他进制数，应该先在笔记本上运算下一个十进制数如何变为八进制，找出规律；
////2.得出应该用取余法；即先取余数，每取一个余数在数组里存起来，再将得出来的商用于作为输入；
////3.之后倒序输出；

 