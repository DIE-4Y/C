#include<stdio.h> 

int main()
{
	int n, i;
	freopen("1008.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)			//�����ļ�ĩβ������ѭ������ 
	{
		for(i = 1; i <= n; i++)
		{	
			int j;
			for(j = 1; j <= i; j++)			//��ӡ�����ǵ�����ͼ�� 
			{
				printf("*");
			}
			printf("\n");					//ÿ����ͼ��֮����һ�и��� 
		}
		printf("\n");
	}
	return 0;
}
