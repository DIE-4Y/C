#include<stdio.h>

int main()
{
	int a,n,y,sum=0;
	scanf("%d%d",&a,&n);
	for(y=1;y<=n;y++)
	{
		int x,i;
		for(x=a,i=1;i<y;i++)
		{
			x=x*10+a;
		}
		sum=sum+x;
	}
	printf("%d",sum);
	return 0;
}
