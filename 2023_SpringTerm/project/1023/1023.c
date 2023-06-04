#include<stdio.h>
#include<math.h>
							//·Ö¶Îº¯Êý 

int main()
{
	double x;
	freopen("1023.txt", "r", stdin);
	while(scanf("%lf", &x) != EOF)
	{
		double y;
		if(x < 0 )
		{
			y =(x+1) * (x+1)+2*x+1.0/x;
			printf("f(%.2lf)=%.2lf\n", x, y);
		}
		else
		{
			y = sqrt(x);
			printf("f(%.2lf)=%.2lf\n", x, y);
		}
	}
	return 0;
}
