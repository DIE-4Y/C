#include<stdio.h>
//дһ������ʵ��쳲��������еļ���

int Fib1(int);//ÿ������Ҫ�ظ�Ԥ�㣬��ʱ̫���������ö����µĲ���  
int Fib2(int);//����ʱ��̣����趨���²��� 

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
