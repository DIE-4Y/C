#include<stdio.h> 


int main()
{
	int a;
	freopen("1006.txt", "r", stdin);
	while(scanf("%d", &a) != EOF)			//控制读到文件末尾，每次答案都用一行分开 
	{
		int b;
		scanf("%d", &b);
		printf("%d\n\n", a + b);
	}
	return 0;
}
