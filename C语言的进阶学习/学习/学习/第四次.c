//#include<stdio.h>
//
//	int main()
//	{
//		printf("ffff%d\n");
//		return 0;
//	}
//��һ����
//#include<stdio.h>
//int main()
//	{
//		int year,leap;
//		printf("enter year:");
//		scanf("%d",&year);
//		if(year%4==0)
//		{
//			if(year%100==0)
//			{
//				if(year%400==0)
//				leap=1;
//			
//				else 
//					leap=0;
//			}
//			else leap=1;
//
//		}
//		else  leap=0;
//			if(leap==1)
//			printf("%d is ",year);
//			else 
//				printf("%d is not",year);
//				printf("a leap year.\n");
//				return 0;
//}
//�ж�����Ĵ��룻
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//		if(i==5)
//			continue;
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}
//�˽�continue��break���������ã�
//#include<stdio.h>
//int main()
//{
	/*int ch = getchar();
	putchar(ch);
	printf("  %c\n",ch);*/
	//int ch=0;
	//while((ch=getchar()) !=EOF)//EOF���ı�������־
	//{
	//	putchar(ch);
	//}

	//return 0;
//}//crtl+z��ʱ����������
//whlie()������ѧϰ

//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	printf("intput three numbers:");
//	scanf("%d %d %d ", &a, &b,&c);
//	if(a<b)
//	
//		if(b<c)
//			printf("max=%d\n",c);
//		else 
//			printf("max=%d\n",b);
//	
//	
//	else if(a<c)
//		printf("max=%d\n",c);
//	else
//		printf("max=%d\n",a);
//	return 0;
//}
//����ж�����������С�Ĵ�������е����⣬
//#include<stdio.h>
//
//	int main()
//	{
//		int ret=0;
//		int ch=0;
//		char password[20]={0};
//		printf("please intput password:>");
//		scanf("%s", password);
//		while((ch=getchar()) !='\n')
//		{
//			;
//		}
//		/*getchar();*/
//		printf("please sure (Y/N):>");
//		ret= getchar();
//		if(ret=='Y')
//		{
//			printf("make suer successful:");
//		}
//		else
//			printf("no");
//		return 0;
//	}
//�������������

//#include<stdio.h>
//int main()
//{
//	int ch=0;
//	while((ch=getchar()) !=EOF)
//	{
//		if(ch<'0' || ch>'9')
//			continue ;
//		putchar(ch);
//	}return 0;
//}

//�ж��ĸ����������ֵ��
//#include<stdio.h>
//int main()
//{
//	int a,b,c,d,t1,t2,max;
//	printf("intput four numbers:");
//		scanf("%d %d %d %d",&a,&b,&c,&d);
//		t1=(a>b)? a:b;
//		t2=(t1>c)? t1:c;
//		max=(t2>d)? t2:d;
//		printf("output max :%d\n",max);
//		return 0;
//	
//
//
//}


//��һ��С��Ŀ
//#include<stdio.h>
//#include<math.h>
//#define M 1000
//
//int main()
//{
//	int a;
//	int k;
//	printf("����һ��С��%d������a=",M);
//	scanf("%d",&a);
//	while(a>M)
//	{
//		printf("�������һ��С��%d������a=",M);
//	scanf("%d",&a);
//
//	}
//		k=sqrt(a);
//	printf("%d��ƽ����������������%d\n",a,k);
//	return 0;
//}

//��1��+2��+3��������+10��
//#include<stdio.h>
//int main()
//{
//	int n=0;
//	int ret=1;
//	int sum=0;
//	for(n=1;n<=10;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum =%d\n",sum);
//	return 0;
//}
// ����n!
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int n=0;
//	int ret=1;
//	printf("intput a number:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		ret=ret*i;
//	}
//	printf("���ret =%d\n",ret);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int k,left,right,sz;
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	k=5;
//	 sz=sizeof(arr)/sizeof(arr[0]);
//	 left =0;
//	 right =sz-1;
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//	if(arr[mid]>k)
//	{
//		right=mid-1;
//	}
//	else if(arr[mid]<k)
//	{
//		left=mid+1;
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n",mid);
//		break;
//	}
//}
//if(left>right)
//{
//	printf("�Ҳ���\n");
//}
//	return 0;
//}
//�����е����⣬�Ҳ�������һ��Kֵ�������쿴�Ƿ���Խ����

//b��д���룬��ʾ����ַ��������ƶ������м��ۣ�
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[]="welcome  to bit!!!!!!!";
//	char arr2[]="######################";
//	int left = 0;
//	//int right= sizeof(arr1)/sizeof(arr1[0])-2;
//	int right =strlen(arr1)-1;
//	printf("%s\n",arr2);
//	while(left<=right)
//	{
//		
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//	    printf("%s\n",arr2);
//		Sleep(1000);		//��Ϣһ��
//		system("cls");
//		left++;
//		right--;
//		 
//	}
//		  printf("%s\n",arr2);
//	return 0;
//}
//
//
//
//
//

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i=0;
//	char password[20]={0};
//	for(i=0;i<3; i++)
//	{
//		printf("please input password:>");
//		scanf("%s",&password);
//			if(strcmp(password,"123456")==0)
//			{
//				printf("login successfully\n");
//			break;
//	}
//			else{
//				printf("wrong password\n");
//			}
//	}
//			if(i==3);
//			printf("three wrong passwords ,exit program\n");
//			return 0;
//	}
//
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int a,b,c;
//	scanf("%d%d%d", &a,&b,&c);
//	if(a<b)
//	{
//		int tem=a;
//		a=b;
//		b=tem;
//	}
//	if(a<c)
//	{
//		int tem=a;
//	a=c;
//	c=tem;
//	}
//
//   if(b<c)
// {
//    	int tem=b;
//  b=c;
//  c=tem;
//  }
//	printf("%d%d%d",a,b,c);
//
//	return 0;
//}������������Ҫ��Ӵ�С����������ĸ������Ҳ���ô���˼�����


//��ӡ���ı�������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=100; i++)
//	{
//		if(i%3==0)
//			printf(" %d ",i);
//	}
//	return 0;
//}
//���������������Լ����շת�����
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int r=0;
//	int m=0;
//	int n=0;
//    printf("����������");
//	scanf("%d %d",&m,&n);
//	while(m%n);
//	{
//		r=m%n;
//		m=n;
//		n=r;
//	}
//	printf("%d\n",r);
//	return 0;
//}
//��ӡ����
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i=0,count=0;
//	for(i=101;i<=200;i+=2)
//	{
//		int j;
//		for(j=2;j<i;j++) 
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//			
//		}
//		if(j==i)
//		{
//			count++;
//			printf(" %d ",i);
//		}
//
//	}
//	printf("\ncount = %d\n",count);
//		return 0;
//
//	}
	// ���ŵĸ��� 
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i=0;
//	int count=0;
//
//	for(i=1; i<100;i++)
//	{
//		if(i%10==9)
//			count++;
//		 if(i/10 ==9)
//			count++;
//	}
//	printf("����ŵĸ���%d\n",count);
//	return 0;
//
//}
//�������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i =0;
//	double sum=0;
//	int flag=1;
//	for(i=1;i<=100;i++)
//	{
//		sum+=flag*1.0/i;
//		flag=-flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}
//
//�����ֵ����ʮ�����������ֵ
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max =arr[0];//���ֵ
//	int i=0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz; i++)
//	{
//		if(arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max= %d\n",max);
//	return 0;
//}
//�žų˷����ʵ�ִ������£�
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i =0;
//	for(i=1;i<=9; i++)
//	{
//		//��ӡһ��
//		int j=1;
//		for(j=1;j<=i; j++)
//		{
//			printf(" %d*%d=%-2d ",j,i,j*i);
//		}
//		printf("\n");
//	}
//return 0;
//}
//ȤζС��Ϸ�����������Ϸ
//1.���Ի�����һ���������
//2.������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("**** 1.play  0.exit**********\n");
//	printf("*****************************\n");
//}
//void game()
//{//��һ�������
//	int ret =0;
//	int guess =0;
//
//	//ʱ���
// ret =rand()%100-1;//����һ��һ�ٵ������printf("%d\n",ret);
//
// while(1)
// {
//	printf("������:");
//	scanf("%d",&guess);
//	if(guess>ret)
//	{
//		printf("�´���\n");
//	}
//	else if(guess<ret)
//	{
//		printf("��С��\n");
//	}
//	else
//	{
//		printf("�¶���\n");
//		break;
//	}
// }
//}
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d",&input);
//			switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//			default:
//				printf("ѡ�����\n");
//				break;
//			}
//	}while(input);
//
//	return 0;
//}
//goto ���ĳ��� ���Թػ�����  
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//#include<stdio.h>
//int main()
//{
//	char input[10]={0};
//	system("shutdown -s -t 60");
//again://whlie(1)
//	printf("���Խ���һ�����ڹػ���������룺��������ȡ���ػ���\n");
//	scanf("%s",&input);
//	if( strcmp(input, "������")==0)
//	{
//		system("shutdown -a");//break;
//	}
//	else 
//	{
//		goto again;
//	}
//	return 0;
//}//������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[10]={0};
//	system("shutdown -s -t 60");
//   while(1)
//   {
//	printf("���Խ���һ�����ڹػ���������룺��������ȡ���ػ���\n");
//	scanf("%s",&input);
//	if( strcmp(input, "������")==0)
//	{
//		system("shutdown -a");break;
//	}
//   }
//	return 0;
//}
