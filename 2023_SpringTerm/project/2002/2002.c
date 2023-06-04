#include<stdio.h>
//五则运算，若除不尽保留两位小数 

int main()
{
	freopen("2002.txt", "r", stdin);
	while(1)
	{
		int a, b;
		char c;
		scanf("%d %d %c", &a, &b, &c);
		if((a == 0) && (b == 0))
			break;
		else
		{
			switch(c)
			{
				case '+': printf("%d + %d = %d\n", a, b, a + b);break;
				case '-': printf("%d - %d = %d\n", a, b, a - b);break;
				case '*': printf("%d * %d = %d\n", a, b, a * b);break;
				case '%': printf("%d %% %d = %d\n", a, b, a % b);break;
				case '/': if(a % b == 0)
							{
								printf("%d / %d = %d\n", a, b, a / b);break; 
							}
							else
						{
							printf("%d / %d = %.2f\n", a, b, a*1.0 / b);break;
						}
			}
		}
	}
	return 0;
}
