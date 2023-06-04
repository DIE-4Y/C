#include<stdio.h>


int main()
{
	freopen("3102.txt", "r", stdin);
	int t, i;
	scanf("%d", &t);
	for(i = 1; i <= t; i++)
	{
		int a, b;
		char c;
		getchar();
		scanf("%c %d %d", &c, &a, &b);
		switch(c)
		{
			case '+': printf("%d\n", a + b);break;
			case '-': printf("%d\n", a - b);break;
			case '*': printf("%d\n", a * b);break;
			case '/':if((a % b) == 0)
						{
							printf("%d\n", a / b);break;
						}
					else
					{
						printf("%.2f\n", a*1.0/b);break; 
					}
		}
	}
	return 0;
}
