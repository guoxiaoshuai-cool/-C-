#define _CRT_SECURE_NO_WARNINGS 1
//struct�ṹ��ؼ��� stu �ṹ���ǩ struct stu - �ṹ������ 
#include<stdio.h>

//typedef struct stu
//{
//	//��Ա����
//	char name[20];
//	short age ;
//	char tele[12];
//	char sex[5];
//}stu;//����һ���ṹ�����ͣ���ռ�ڴ�ռ䣩
//void print1(stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age:  %s\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex:  %s\n", tmp.sex);
//	return ;
//}
//void print2(stu* ps)//���ַ�������Щ
//{
//	printf("name: %s\n", ps->name);//��Խṹ��ָ��
//	printf("age:  %s\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex:  %s\n", ps->sex);
//	return ;
//}
//int main()
//{
//	stu s = {"����",20,"1455445","��"};  //�ֲ����� ����Ľṹ�����
//	print1(s);
//	print2(&s);//���ṹ��ĵ�ַ��ȥ
//				//�����ṹ�����			
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[30];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//    char *pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = {"hehe", {100, 'w', "hello word", 3.14}, arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n",t.pc);
//	return 0;
//}//(.)�ṹ����ʵĲ�����
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	printf("%d\n",ret);//���Σ��������󴫲Σ�
//	return 0;
//
//}
//�ṹ�崫�δ����ǵ�ַ��
//����ջ֡�Ĵ��������� ������ջ֡�Ĵ���������


// ʵ�õ��Լ���
//debug��Release�Ľ���
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for(i = 0; i <100; i++)
//	{
//		printf("%d  ", i);
//	}
//	system("pause");
//	return 0;
//
//}
//release ����
//rekease�汾��Debug�Ĳ��죬Debug ���е��Գ��򣬰ѵ�����Ϣ��¼���������Ե���
//�ڴ��

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (int i = 0; i <= 12; i++)//c++��д��
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char*  my_strcpy(char* dest, const char* src)//Ŀ�ĵ�
//{
//	char* ret = dest;
//	/*if(dest!=NULL&& src != NULL)*/
//	/*{*/
//	assert(dest != NULL);//���� ��ָ֤�����Ч��
//	assert(src != NULL);//����
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//	/*while (*src != '\0');
//	{
//	*dest = *src;
//	src++;
//	dest++;
//	}
//	*dest = *src;
//	*/
//	/*}*/
//}
//int main()
//{
//	char arr1[] = "************";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	const int num = 10;
//	 int* const p = &num;//const����ָ������ұ������ε���ָ�����p����p���ܱ��ı䣻 
//	*p = 20;//const����ָ��������ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p��numm)��ֵ��
//	printf("%d\n", num);
//	return 0;
//}
//int mian()
//{
//
//	int a = 0;
//	int *p = &a;
//	assert(p != NULL);
//	return 0;
//}
#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//������������󣬱����ʹ��������ʹ�������ʱ����

