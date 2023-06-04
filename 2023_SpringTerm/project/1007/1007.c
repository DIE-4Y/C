#include<stdio.h>


int main()
{
	int n, i, a, b;
	freopen("1007.txt", "r", stdin);		
	scanf("%d", &n);					//控制n次求和，每次数据之间都用一行分开 
	for(i = 1; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n\n", a + b);
	}
	scanf("%d %d", &a, &b);					//最后一行没有空格 
	printf("%d", a + b);
	return 0;
}
