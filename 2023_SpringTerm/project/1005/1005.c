#include<stdio.h>


int main()
{
	int n, i;
	freopen("1005.txt", "r", stdin);
	scanf("%d", &n);						//����n����
	for(i = 1; i <= n; i++)
	{
		int m, j, ret, sum = 0;
		scanf("%d", &m);					//ÿ������m����֮�� 
		for(j = 1; j <= m; j++)
		{
			scanf("%d", &ret);
			sum += ret;
		}
		printf("%d\n", sum);
	}
	return 0;
}
