#include<stdio.h>
#include<math.h>

int main()
{
	freopen("3205.txt", "r", stdin);
	int i = 1;
	while(1)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if((a == 0) && (b == 0) && (c == 0))
			break;
		double x;
		if(a == -1)
		{
			if(b < c)
			{
				x = sqrt(c*c - b*b);\
				printf("Triangle #%d\na = %.3lf\n", i++, x);
			}
			else
			{
				printf("Triangle #%d\nImpossible.\n", i++);
			}
			printf("\n");
		}
		if(b == -1)
		{
			if(a < c)
			{
				x = sqrt(c*c - b*b);
				printf("Triangle #%d\nb = %.3lf\n", i++, x);
			}
			else
			{
				printf("Triangle #%d\nImpossible.\n", i++);
			}
			printf("\n");
		}
		if(c == -1)
		{
			x = sqrt(a*a + b*b);
			printf("Triangle #%d\nc = %.3lf\n", i++, x);
			printf("\n");
		}
	}
	return 0;
}
