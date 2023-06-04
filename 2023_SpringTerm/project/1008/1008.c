#include<stdio.h> 

int main()
{
	int n, i;
	freopen("1008.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)			//读到文件末尾控制总循环次数 
	{
		for(i = 1; i <= n; i++)
		{	
			int j;
			for(j = 1; j <= i; j++)			//打印出三角递增的图形 
			{
				printf("*");
			}
			printf("\n");					//每个大图形之间用一行隔开 
		}
		printf("\n");
	}
	return 0;
}
