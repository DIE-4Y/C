#include<stdio.h>

int main()
{
	int a;
	freopen("3202.txt", "r", stdin);
	while(scanf("%d", &a) != EOF)
	{
		int i, b, sum = 0;
		for(i = 1; i <= 5; i++)
		{
			scanf("%d", &b);
			if(b < a)
				sum += b;
		}
		printf("%d\n", sum);
	}
	return 0;
}
