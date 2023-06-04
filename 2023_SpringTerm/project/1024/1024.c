#include<stdio.h>
//ŒÂ‘Ú‘ÀÀ„ 

int main()
{
	int a, b;
	char y;
	freopen("1024.txt", "r", stdin);
	while(scanf("%d %d %c", &a, &b, &y) != EOF)
	{
		double k = a / b, sum = a + b, sub = a - b, mul = a * b;
		if(b < 0)
		{
			switch(y)
			{
				case '+': printf("%d + (%d) = %.0lf\n", a, b, sum);break;
				case '-': printf("%d - (%d) = %.0lf\n", a, b, sub);break;
				case '*': printf("%d * (%d) = %.0lf\n", a, b, mul);break;
				case '/': printf("%d / (%d) = %.0lf\n", a, b, k);break;
				case '%': printf("%d %% (%d) = %d\n", a, b, a % b);break;
			}
		}
		else
		{
			switch(y)
			{
				case '+': printf("%d + %d = %.0lf\n", a, b, sum);break;
				case '-': printf("%d - %d = %.0lf\n", a, b, sub);break;
				case '*': printf("%d * %d = %.0lf\n", a, b, mul);break;
				case '/': printf("%d / %d = %.0lf\n", a, b, k);break;
				case '%': printf("%d %% %d = %d\n", a, b, a % b);break;
			}
		}
	}
	return 0;
}
