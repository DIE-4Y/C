#include<stdio.h>
//�������µĲ���дһ��������׳�

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
