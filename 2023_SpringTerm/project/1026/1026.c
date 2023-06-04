#include<stdio.h>


int main()
{
	int a;
	freopen("1026.txt", "r", stdin);
	while(scanf("%d", &a) != EOF)
	{
		int g, s, b, q;
		g = a%10; a = a/10; g = (g + 9)%10;
		s = a%10; a = a/10; s = (s + 9)%10;
		b = a%10; a = a/10; b = (b + 9)%10;
		q = a%10; q = (q + 9)%10;
		int new;
		new = s*1000 + q*10 + g*100 + b;
		printf("%d\n", new);
	}
	return 0;
}
