#include<stdio.h>
//求a+aa+aaa+aa…a(n个a)之和。

int main()
{
	int a, n;
	freopen("1030.txt", "r", stdin);
	while(scanf("%d %d", &a, &n) != EOF)
	{
		long long int sum = 0;
		int i;
		for(i = 1; i <= n; i++)
		{
			int j, ret = a;
			for(j = 1; j < i; j++)
			{
				ret = ret * 10 +a;
			}
			sum += ret;
		}
		printf("%ld\n", sum);
	}
	return 0;
}
