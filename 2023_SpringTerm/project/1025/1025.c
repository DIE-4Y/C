#include<stdio.h>
//���㵽��ʱ�䣬ǰ��λΪСʱ������λΪʱ�� 
 

int main()
{
	int a, b;
	freopen("1025.txt", "r", stdin);
	while(scanf("%d %d", &a, &b) != EOF)
	{
		if((a >= 0) && (a <= 2359) && (b >= 0) && (b <= 2359))
		{
			int h, m, H, M, th, tm;
			h = a / 100; m = a % 100;
			H = b / 100; M = b % 100;
			if(M < m)
			{
				th = H - h - 1;
				tm = M - m + 60;
			}
			else
			{
				th = H - h;
				tm = M - m;
			}
			if(th == 0)
			{
				printf("The train journey time is %d minutes.\n", tm);
			}
			else if(tm == 0)
			{
				printf("The train journey time is %d hours.\n", th);
			}
			else
			{
				printf("The train journey time is %d hours %d minutes.\n",th, tm);
			}
		}
	}
	return 0;
}
