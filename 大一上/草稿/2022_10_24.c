#include<stdio.h>
//求最大公因数和最小公倍数 
int main()
{
	int n,m,l,x,y;
	scanf("%d%d",&n,&m);
	if(n<m)
	{
		l=m;
		m=n;
		n=l;
	}
	for(x=m;x>0;x--)
	{
		if(n%x==0&&m%x==0)
		{
			printf("%d\n",x);break;
		}
	}
	for(y=n;y<=m*n;y++)
	{
		if(y%n==0&&y%m==0)
		{
			printf("%d\n",y);break;
		}
	}
	return 0;
}
