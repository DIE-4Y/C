#include<stdio.h>
//斐波那契数列与a比大小
 
int main()
{
	double fib, fib0,fib1;
	int m, n, a, i, j;
	freopen("2001.txt", "r", stdin);
	scanf("%d", &m);
	for(i = 1; i <= m; i++)
	{
		fib0 = 0; fib1 = 1; 
		scanf("%d %d", &n, &a);
		if(n == 1)
		{
			if(a <= fib1)
				printf("Yes\n");
			else
				printf("No\n");
		}
		else
		{
			for(j = 2; j <= n; j++)
			{
				fib = fib0 + fib1;
				fib0 = fib1; 
				fib1 = fib;
			}
			if(a <= fib)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	return 0;
}
