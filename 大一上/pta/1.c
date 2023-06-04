#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	m=(n+1)/2; 
	if(n%2==1)
	{
		int row;
		for(row=1;row<=m;row++)
		{
			int i;
			for(i = 1;i<=m-row;i++)
			{
				printf("  ");
			}
			int x;
			for(x=1;x<2*row;x++)
			{
				printf("* ");
			}
			printf("\n");
		}
		int line;
		for(line=1;line<m;line++)
		{
			int z;
			for(z=1;z<=line;z++)
			{
				printf("  "); 
			}
			int y;
			for(y=1;y<2*(m-line);y++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}
