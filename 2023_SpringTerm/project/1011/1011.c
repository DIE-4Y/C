#include<stdio.h>


int main()
{
	int n, i;
	freopen("1011.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)			//������ͼ������ 
	{
		int j;
		for(i = 1; i <= n; i++)				//����ͼ��ÿһ�еĽṹ 
		{
			for(j = 1; j < i; j++ )
			{
				printf(" ");
			}
			for(j = n-i; j >= 0; j--)
			{
				printf("*");				//��ͼ�β�������ĵ����� 
			}
			printf("\n");					//ÿ����ͼ��֮����һ�зֿ� 
		}
		printf("\n");
	}
	return 0;
}
