#include<stdio.h>


int main()
{
	freopen("3103.txt", "r", stdin);
	while(1)
	{
		int n, i = 1, j, num = 0;
		scanf("%d", &n);
		if(n == -1)
			break;
		int a[20] = {0};
		a[0] = n;
		while(1)
		{
			scanf("%d", &a[i]);
			i++;
			if(a[i - 1] == 0)
				break;
		}
		for(i = 0; a[i] != 0; i++)
		{
			for(j = 0; a[j] != 0; j++)
			{
				if(a[i] == 2*a[j])
					num++;
			}
		}
		printf("%d\n", num);
	}
	return 0;
}
