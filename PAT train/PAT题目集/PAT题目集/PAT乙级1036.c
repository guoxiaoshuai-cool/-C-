//PAT�Ҽ�������10361���°���һ��ѧ���
//AC�������£�
#if 0
#include<stdio.h>
int main()
{
	int N =0;
	char C;
	scanf("%d %c", &N, &C);
	int i = 0, j = 0;
	for (i = 0; i < (N + 1) / 2; i++)//�������
	{
		if (i==0||i==(N+1)/2-1)
		{
			for (j = 0; j < N; j++)
			{
				printf("%c", C);
			}
		}
		else {
			for (j = 0; j < N; j++)
			{
				if (j == 0 || j == N - 1)
					printf("%c", C);
				else  printf(" ");
			}
			
		}
		printf("\n");
	}
	
	return 0;
}
#endif

//�����ܽ᣺����һ���򵥵Ĵ����������������Ŀ��ע����������������߳��Ĺ�ϵ�����������