#include<stdio.h> 

int main()
{
	int n, i;
	freopen("1014.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)				//读到文件末尾，大图形的个数 
	{
		for(i = 1; i <= n; i++)					//控制大图形每一层的循环 
		{
			int j;
			for(j = 1; j < i; j++ )			//将大图形控制成倒等腰三角形和正三角形拼成的图形 
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
