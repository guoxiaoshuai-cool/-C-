//strstr char * strstr(const char *, const char *);
//Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.
//�����ַ���
//strstr������ʵ������
//KNP�㷨
#if 0
#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;
	if (*p2 == '\0')
	{
		return p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))
		{
			s1++;
			s2++;
		}

		if (*s2 == '\0')
		{
			return cur;//�ҵ��ִ�

		}
		cur++;
	}
	return NULL;//�Ҳ����ִ�
}
int main()
{
	char* p1 = "abcdef";
	char *p2 = "def";
	char *ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("�ַ���������");
	}
	else
		printf("%s\n", ret);
	return 0;

}
#endif








