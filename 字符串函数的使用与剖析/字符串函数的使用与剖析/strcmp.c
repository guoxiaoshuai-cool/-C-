//strcmp�����ķ�����ʵ�� char * strcat ( char * destination, const char * source );
//��׼�涨��
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//��ô����ж������ַ�����
//�Ƚ������ַ����Ĵ�С
//�����Զ���ʵ�����£�
#if 0
#include<stdio.h>
#include<assert.h>
my_strcmp(const char*str1, const char* str2)
{
	assert(str1&&str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;//����
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2) return 1;//����
	else return -1;//С��
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abqwe";
	int ret = my_strcmp(p1, p2);
	printf("ret=%d\n", ret);

	return 0;

}
#endif