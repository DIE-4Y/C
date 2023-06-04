#include<stdio.h>


int main()
{
	freopen("3208.txt","r", stdin);
	double sub, front, behind;
	scanf("%lf",&front);
	while(1)
	{
		scanf("%lf",&behind);
		if(behind == 999)
		{
			printf("End of Output\n");
			break;
		}
		sub = behind - front;
		printf("%.2lf\n",sub);
		front = behind; 
	}
	return 0;
}
