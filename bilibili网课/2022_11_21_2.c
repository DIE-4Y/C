#include<stdio.h>
//不定义新的参数写一个函数求阶乘

int Fac(int);

int main()
{
	int n,ret;
	scanf("%d",&n);
	ret = Fac(n);
	printf("%d\n",ret);
	return 0;
}

int Fac(int x)
{
	if(x<2)
		return 1;
	else
		return x*Fac(x-1);
}
