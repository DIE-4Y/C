#include<stdio.h>
//鸡兔同笼中动物最多多少只，最少多少只 

int main()
{
	int n, i;
	freopen("2004.txt", "r", stdin);
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		int a;
		scanf("%d", &a);
		if((a % 2) != 0)
		{
			printf("0 0\n");
		}
		else
		{
			int max, min;
			min = (a / 4) + ((a % 4) / 2);
			max = a / 2;
			printf("%d %d\n", min, max);
		}
	}
	return 0;
}
