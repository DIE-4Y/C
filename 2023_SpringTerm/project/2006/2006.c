#include<stdio.h>
#define Z 10001
//被伪造的票数 

int main() 
{
	int n, m, i;
	freopen("2006.txt", "r", stdin);
	while(1)
	{
		int p[Z] = {0};				//将票数号数与下标记录起来 
		int flag = 0;
		scanf("%d %d", &n, &m);
		if( (n == 0) && (m == 0))
			break;
		else
		{
			for(i = 1; i <= m; i++)
			{
				int k;
				scanf("%d", &k);
				p[k]++;
				if(p[k] == 2)
					flag++;
			}
		}
		printf("%d\n", flag);
	}
	return 0;
}
