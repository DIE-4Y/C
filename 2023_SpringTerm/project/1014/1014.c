#include<stdio.h> 

int main()
{
	int n, i;
	freopen("1014.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)				//�����ļ�ĩβ����ͼ�εĸ��� 
	{
		for(i = 1; i <= n; i++)					//���ƴ�ͼ��ÿһ���ѭ�� 
		{
			int j;
			for(j = 1; j < i; j++ )			//����ͼ�ο��Ƴɵ����������κ���������ƴ�ɵ�ͼ�� 
			{
				printf(" ");
			}
			for(j = (2*(n - i)) + 1; j >= 1; j--)
			{
				printf("*");
			}
			printf("\n");
		}
		for(i = 2; i <= n; i++)
		{
			int k;
			for(k = 1; k <= n - i; k++)
			{
				printf(" ");
			}
			for(k = 1; k <= (2*i) - 1; k++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
