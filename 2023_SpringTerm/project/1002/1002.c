#include<stdio.h>


int main()
{
	int a, b;
	freopen("1002.txt", "r", stdin);
	while(scanf("%d", &a) != EOF)		//两数相加，一直读到文件尾 
	{
		scanf("%d", &b);
		printf("%d\n", a+b);
	}
	return 0;
}
