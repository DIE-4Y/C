#include<stdio.h>
//求班上所有学生的平均年龄

int main()
{
	freopen("3101.txt", "r", stdin);
	int n, i, sum = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		int y;
		scanf("%d", &y);
		sum+=y;
	}
	if((sum % n) == 0)
		printf("%d", sum/n);
	else
		printf("%.1f", sum * 1.0/n);
	return 0;
}
