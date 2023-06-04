#include<stdio.h>


int main()
{
	int m, n;
	freopen("1028.txt", "r", stdin);
	while(scanf("%d %d", &m, &n) != EOF)
	{
		int ret, a = m, b = n;
		if(a < b) 
		{
			ret = a, a = b, b = ret;
		}
		while(ret = a%b)
		{
			a = b;
			b = ret;
		}
		int max = b, min = m*n/max;
		printf("The lowest common multiple of %d and %d is %d.\n", m, n, min);
		printf("The greatest common divisor of %d and %d is %d.\n\n", m, n, max);
	}
	return 0;
}
