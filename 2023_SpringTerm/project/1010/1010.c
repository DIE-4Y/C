#include<stdio.h>


int main()
{
	int n, i;
	freopen("1010.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)			//控制总图形数量 
	{
		int j;
		for(i = 1; i <= n; i++)				//控制图形每一行的结构 
		{
			for(j = n-i; j >= 1; j--)
			{
				printf(" ");				//将图形补成向左的正三角 
			}
			for(j = 1; j <= i; j++ )
			{
				printf("*");
			}
			printf("\n");					//每个大图形之间用一行分开 
		}
		printf("\n");
	}
	return 0;
}
