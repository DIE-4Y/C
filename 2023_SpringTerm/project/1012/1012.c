#include<stdio.h> 

int main()
{
	int n, i;
	freopen("1012.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)				//�����ļ�ĩβ����ͼ�εĸ��� 
	{
		for(i = 1; i <= n; i++)					//���ƴ�ͼ��ÿһ���ѭ�� 
		{
			int j;
			for(j = n - i; j > 0; j-- )			//����ͼ�ο��Ƴ������������� 
			{
				printf(" ");
			}
			for(j = 1; j <= (2*i) - 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
