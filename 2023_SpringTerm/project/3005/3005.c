#include<stdio.h>

int jf(int x)
{
	if(x >= 100)
		return x%100;
	else
		return x;
}

int main()
{
	int i, t;
	freopen("3005.txt", "r", stdin);
	scanf("%d", &t);
	for(i = 1; i <= t; i++)
	{
		int a, b, sum;
		scanf("%d %d", &a, &b);
		a = jf(a); b = jf(b);
		sum = a + b;
		sum = jf(sum);
		printf("%d\n", sum);
	}
	return 0;
}
/*
#include<stdio.h>


int main()
{
	int t, i;
	scanf("%d", &t);
	for(i = 1; i <= t; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		a = a % 100; b = b % 100;
		printf("%d\n", (a + b) % 100);
	}
	return 0;
}
*/ 
