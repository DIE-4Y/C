#include<stdio.h> 

int main()
{
	int n, i;
	freopen("1013.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)				//�����ļ�ĩβ����ͼ�εĸ��� 
	{
		for(i = 1; i <= n; i++)					//���ƴ�ͼ��ÿһ���ѭ�� 
		{
			int j;
			for(j = 1; j < i; j++ )			//����ͼ�ο��Ƴɵ����������� 
			{
				printf(" ");
			}
			for(j = (2*(n - i)) + 1; j >= 1; j--)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
