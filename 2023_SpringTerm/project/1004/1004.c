#include<stdio.h>


int main()
{
	freopen("1004.txt", "r", stdin);
	while(1)
	{
		int n;
		scanf("%d", &n);		//����ÿ������ø��� 
		if(n == 0)			//�ж��Ƿ�������� 
		{
			break;
		}
		int i, sum = 0, ret;
		for(i = 1; i <= n; i++)
		{
			scanf("%d", &ret);
			sum = sum + ret;
		}
		printf("%d\n", sum);
	}
	return 0;
}
