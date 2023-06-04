#include<stdio.h> 

int main()
{
	int n, i;
	freopen("1012.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)				//读到文件末尾，大图形的个数 
	{
		for(i = 1; i <= n; i++)					//控制大图形每一层的循环 
		{
			int j;
			for(j = n - i; j > 0; j-- )			//将大图形控制成正等腰三角形 
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
