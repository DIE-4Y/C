#include<stdio.h> 
//找最小公倍数 

int main()
{
	long long i, n;
	freopen("2005.txt", "r", stdin);
	scanf("%ld", &n);
	for(i = 1; i <= n; i++)
	{
		long long a, b, ret, k;
		scanf("%ld %ld", &a, &b);
		if(a < b)
		{
			k = a; a = b; b = k;
		}
		while( a % b)
		{
			ret = a % b; a = b; b = ret;
		}
		printf("%ld\n", b);
	}
	return 0;
}
