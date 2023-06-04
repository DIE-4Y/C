#include<stdio.h>


int main()
{
	int n, i;
	freopen("1009.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)			//控制总大图案个数 
	{
		for(i = n; i >= 1; i--)				//打印到三角形图案 
		{
			int j;
			for(j = 1; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");					//每个大图案之间用一行隔开 
		}
		printf("\n");
	}
	return 0;
}
