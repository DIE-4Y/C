#include<stdio.h>


int main()
{
	int a, b;
	freopen("1002.txt", "r", stdin);
	while(scanf("%d", &a) != EOF)		//������ӣ�һֱ�����ļ�β 
	{
		scanf("%d", &b);
		printf("%d\n", a+b);
	}
	return 0;
}
