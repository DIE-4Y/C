#include<stdio.h>
//��Ѽ������ 


int main()
{
	int N, M, S, x;
	scanf("%d%d%d", &N, &M, &S);
	x = N-(M*S);
	if(x<=N/2)
	{
		printf("��Ѽ,��ʣ%d��\n", x);
	}
	else
	{
		printf("����ѽ,��ʣ%d��\n", x);
	}
	return 0;
}
