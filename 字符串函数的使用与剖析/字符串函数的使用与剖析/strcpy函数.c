//strcpy�����ķ�����ʵ��
//char* strcpy(char * destination, const char * source );

//�����Զ���ʵ�����£�ʹ��ָ�����ʽʵ��
#if 0
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcpy( char* dest,const char* src)//Ҫʵ�����������Ҫ�����ĺ�������Ҫ�С�\0'
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*dest++ = *src++)//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";//arr1���ַ����ȱ������arr2��
	//char arr2[] = { 'b','i','t' };//����ʵ�����������û��\0�����ܻ��������Խ��
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;

}
#endif
//strcpy�Ľ����Լ�ע���
//Copies the C string pointed by source into the array pointed by destination, including the terminating null
//character(and stopping at that point).
//Դ�ַ��������� '\0' ������
//�ὫԴ�ַ����е� '\0' ������Ŀ��ռ䡣
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
//Ŀ��ռ����ɱ䡣
//ѧ��ģ��ʵ�֡�