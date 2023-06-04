#include<stdio.h>


int main()
{
	int n;
	freopen("1027.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)
	{
		double ret, sum = 0;
		int i;
		for(i = 1; i <= n; i++)
		{
			ret = 1.0/(2*i - 1);
			sum += ret;
		}
		printf("%.6lf\n", sum);
	}
	return 0;
}
