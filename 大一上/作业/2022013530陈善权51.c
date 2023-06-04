#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	for(i=111;i<=999;i++)
	{
		int x,y,z,r,p; 
		x=(i%10);
		y=(i/10);
		z=(y%10);
		r=(y/10);
		p=(r%10);
		if(i==(pow(x,3)+pow(z,3)+pow(p,3)))
			printf("%5d",i);
	}
	return 0;
 } 
