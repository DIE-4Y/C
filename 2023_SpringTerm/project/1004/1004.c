#include<stdio.h>


int main()
{
	freopen("1004.txt", "r", stdin);
	while(1)
	{
		int n;
		scanf("%d", &n);		//控制每行输入得个数 
		if(n == 0)			//判断是否继续计算 
		{
			break;
		}
		int i, sum = 0, ret;
		for(i = 1; i <= n; i++)
		{
			scanf("%d", &ret);
			sum = sum + ret;
		}
		printf("%d\n", sum);
	}
	return 0;
}
