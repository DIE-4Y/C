#include<stdio.h>

//Ð´¸öº¯Êýµ¹ÐòÊä³ö
 
void dxsc(int n)
{
	int x = n%10;
	if(n>=0&&n<=9)
		printf("%d ",n);
	else
	{
		printf("%d ",x);
		dxsc(n/10);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	dxsc(n);
	return 0;
}
