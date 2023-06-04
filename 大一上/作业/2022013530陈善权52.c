#include<stdio.h>
int main()
{
	int i=1,n=1;
	double sum1=0.0,sum=0.0,x,y,z,a,b,c;
	for(i=1;i<=20;i++)
	{
		for(x=1.0,y=1.0,z=0.0,a=1.0,b=0.0,c=0.0,n=1;n<=i;n++)
		{
			z=x;
			x=x+y;
			y=z;
			c=a;
			a=a+b;
			b=c;
			sum1=x/a;
		}
		sum=sum+sum1;
	}
	printf("%lf",sum);
	return 0; 
}
