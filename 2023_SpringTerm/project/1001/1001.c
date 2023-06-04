#include<stdio.h>


int main()
{
	int i ,n, a, b;
	freopen("1001.txt", "r", stdin);
	scanf("%d", &n);		//进行n次求和运算 
	for(i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}
