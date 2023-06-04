#include<stdio.h>
#include<math.h>
//计算A+B,需要注意的是：如果A和B的末尾K（不超过8）位数字相同，请直接输出-1。

int main()
{
	freopen("3201.txt", "r", stdin);
	while(1) 
	{
		int i, a, b, k, aw, bw, sub = 1;
		scanf("%d %d %d", &a, &b, &k);
		if((a == 0) && (b == 0))
			break;
		else
		{
			for(i = 1; i <= k; i++)
			{
				sub *= 10;
			}
			aw = a % sub;
			bw = b % sub;
			if(aw == bw)
				printf("-1\n");
			else
				printf("%d\n", a + b);
		}
	}
	return 0;
}
