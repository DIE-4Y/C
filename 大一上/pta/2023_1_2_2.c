#include<stdio.h>
//冲鸭，加油 


int main()
{
	int N, M, S, x;
	scanf("%d%d%d", &N, &M, &S);
	x = N-(M*S);
	if(x<=N/2)
	{
		printf("冲鸭,还剩%d米\n", x);
	}
	else
	{
		printf("加油呀,还剩%d米\n", x);
	}
	return 0;
}
