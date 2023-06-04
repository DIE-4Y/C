#include<stdio.h>


int main()
{
	freopen("1003.txt", "r", stdin);
	while(1)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if((a == 0)&&(b == 0 ))			//一直输出a+b的值，直到遇到0,0结束 
		{
			break;
		}
		else
		{
			printf("%d\n", a + b);
		}
	}
	return 0;
}
