#include<stdio.h>

//计算外卖价格 

int main()
{
	int price=4,x;
	char a; 
	scanf("%d %c",&x,&a);
	if(x<=1000)
	{
		price=4;
	}
	else
	{
		if((x-1000)%500==0)
			price=price+(x-1000)/500*3;
		else
			price=price+((x-1000)/500+1)*3;
	}
	if(a=='n')
		printf("%d",price);
	if(a=='y')
		printf("%d",price+5);
	return 0;
}


