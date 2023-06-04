#include<stdio.h>
//写一个函数实现斐波那契数列的计算

int Fib1(int);//每个数都要重复预算，耗时太长，但不用定义新的参数  
int Fib2(int);//所花时间短，但需定义新参数 

int main()
{
	int n,ret;
	scanf("%d",&n);
	ret = Fib2(n);
	printf("%d\n",ret);
	return 0;
}

int Fib1(int x)
{
	if(x<=2)
		return 1;
	else
		return Fib1(x-1)+Fib1(x-2);
}

int Fib2(int x)
{
	int a = 1,b = 1,ret = 0;
	if(x<=2)
		return 1;
	else
	{
		while(x>2)
		{
			ret = a+b;
			a = b;
			b = ret;
			x--;
		}
		return ret;
	}
}
