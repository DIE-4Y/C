//一个函数P(n,x)的计算

#include<stdio.h>

double p(int n, double x)
{
		if(n == 0)
		{
			return 1;
		}
		else if(n ==1)
		{
			return x;
		}
		else
		{
			return (((2*n-1)*p(n-1,x)-(n-1)*p(n-2,x))/n);
		}
}

int main()
{
	int i, repeat, n[10];
	double x[10];
	scanf("%d", &repeat);
	for(i = 0; i < repeat;i++)
	{
		scanf("%d%lf", &n[i], &x[i]);
	}
	for(i = 0; i < repeat ;i++)
	{
		double result;
		result = p(n[i], x[i]);
		printf("p(%d,%.2lf)=%.2lf\n", n[i], x[i] , result);
	}
	return 0;
}
