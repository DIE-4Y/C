#include<stdio.h>


int main()
{
	freopen("3003.txt", "r", stdin);
	while(1)
	{
		int i = 0, n;
		scanf("%d", &n);
		if(n == 0)
			break;
		else
		{
			while(n > 1)
			{
				if((n % 2) == 0)
				{
					i++;
					n /= 2;
				}
				else
				{
					i++;
					n = (3 * n + 1) / 2;
				}
			}
			printf("%d\n", i);
		}
	}
	return 0;
}
