#include<stdio.h>
#include<math.h>
//����A+B,��Ҫע����ǣ����A��B��ĩβK��������8��λ������ͬ����ֱ�����-1��

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
