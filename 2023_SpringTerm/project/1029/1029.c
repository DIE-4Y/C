#include<stdio.h>
#include<math.h>

int isprime(int ret)
{
	if(ret <= 1)
		return 0;
	else if(ret == 2)
		return 1; 
	long long j;
	for(j = 2;j <= sqrt(ret); j++)
	{
		if((ret % j) == 0)
			return 0;
	}
	return 1;
}


int main()
{
	int a, sum = 0;
	freopen("1029.txt", "r", stdin);
	while(scanf("%d", &a) != EOF)
	{
		if((a > 0)&&(isprime(a)))
		{
			sum += a;
		}
		else if(a <= 0)
		{
			printf("%d\n", sum);
			sum = 0;
		}
	}
	return 0;
}
