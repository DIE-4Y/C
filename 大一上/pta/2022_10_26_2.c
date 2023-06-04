#include<stdio.h>
#include<math.h>

int main()
{
	int n,m,i;
	scanf("%d%d",&m,&n);
	for(i=0;m<=n;m++)
	{
		int a,b,c,ret,sum=0;
		ret=m;
		a=ret%10;
		ret=ret/10;
		b=ret%10;
		ret=ret/10;
		c=ret%10;
		sum=(pow(a,3)+pow(b,3)+pow(c,3));
		if(sum==m)
			i++;
	}
	printf("%d\n",i);
	return 0;
} 
