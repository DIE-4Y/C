#include<stdio.h>
#include<math.h>
//求一个数可化为两个数的平方
 

int main()
{
	int n;
	freopen("2003.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)
	{
		int i, j, k, flag = 0;
		k = sqrt(n);
		for(i = 1; i <= k; i++)
		{
			for(j = i; j <= k; j++)
			{
				if(((i*i) + (j * j)) == n)
				{
					flag ++;
					printf("No %d: %d * %d + %d * %d = %d\n", flag, i, i, j, j, n);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
