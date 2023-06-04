#include<stdio.h>
#include<math.h>
//ÅĞ¶ÏËØÊı 

int Prime(long long ret)
{
	if(ret == 1)
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
	int i;
	long long N,ret[10];
	scanf("%ld",&N);
	for( i=0; i<N; i++)
	{
		scanf("%ld",&ret[i]);
	}
	for(i=0; i<N; i++)
	{
		int k = Prime(ret[i]);
		if(k)
			printf("Yes\n");
		else 
			printf("No\n");
	}
	return 0;
}
