#include<stdio.h>


int main()
{
	int n, i;
	freopen("1009.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)			//�����ܴ�ͼ������ 
	{
		for(i = n; i >= 1; i--)				//��ӡ��������ͼ�� 
		{
			int j;
			for(j = 1; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");					//ÿ����ͼ��֮����һ�и��� 
		}
		printf("\n");
	}
	return 0;
}
