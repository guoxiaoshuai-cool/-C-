//ʵ��strlen����size_t strlen ( const char * str );
//1.�������ķ���
//2.�ݹ�
//ָ�룬ָ��
//
//��ָ�����ʽʵ��strlen����
#if 0
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;//��������������
}
int main()
{
	int len = my_strlen("abcdef");
	printf("%d\n", len);
}//size_t�޷������ͣ�size_t strlen( const char *string );
#endif
//�����Ľ��ܼ�ע������
//�ַ����Ѿ� '\0' ��Ϊ������־��strlen�������ص������ַ����� '\0' ǰ����ֵ��ַ������������� '\0' )��
//����ָ����ַ�������Ҫ�� '\0' ������
//ע�⺯���ķ���ֵΪsize_t�����޷��ŵģ� �״� ��
//ѧ��strlen������ģ��ʵ��