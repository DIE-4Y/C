#include<stdio.h>
//µ¹Èý½Ç 
int main()
{
	int n,i,x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(x=0;x<i;x++)
		{
			printf(" ");
		}
		for(y=1;y<=n-i;y++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
 } 
