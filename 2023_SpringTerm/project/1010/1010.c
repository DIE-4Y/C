#include<stdio.h>


int main()
{
	int n, i;
	freopen("1010.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)			//������ͼ������ 
	{
		int j;
		for(i = 1; i <= n; i++)				//����ͼ��ÿһ�еĽṹ 
		{
			for(j = n-i; j >= 1; j--)
			{
				printf(" ");				//��ͼ�β�������������� 
			}
			for(j = 1; j <= i; j++ )
			{
				printf("*");
			}
			printf("\n");					//ÿ����ͼ��֮����һ�зֿ� 
		}
		printf("\n");
	}
	return 0;
}
