//strcat �����ķ�����ʵ��  char * strcat ( char * destination, const char * source );
//�����Ľ��ܼ�ע������
//Appends a copy of the source string to the destination string.The terminating null character in
//destination is overwritten by the first character of source, and a null - character is included at the end of
//the new string formed by the concatenation of both in destination.
//Դ�ַ��������� '\0' ������
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ��������ݡ�
//Ŀ��ռ������޸ġ�
//�ַ����Լ����Լ�׷�ӣ���Σ�
//�����Զ���ʵ�ִ�������
#if 0
#include<stdio.h>
#include<string.h>
#include<assert.h>
char * my_strcat( char* dest,const char*src)
{
	char*ret = dest;
	assert(dest != NULL);
	assert(src);//1.�ҵ�Ŀ���ַ���'\0' 
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)//2.׷��
	{
		;
	}
	return ret;//����ԭ�����׵�ַ
}
int main()
{
	char arr1[30] = "hello";//���������ռ�����㹻��
	char arr2[] = "word";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}

#endif