#include<stdio.h>


int main()
{
	int n, i, sum = 0, ret = 1;
	scanf("%d",&n);
	for(i = 1; i<=n; i++)
	{
		int j;
		ret *= i;
		sum += ret;
	}
	printf("%d\n",sum);
	return 0;
}
