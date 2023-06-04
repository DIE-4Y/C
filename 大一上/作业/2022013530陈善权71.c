#include<stdio.h>
//写函数求最小公倍数和最大公约数 

int gys(int m, int n)
{
	int t;
	if(m>n)
	{
		t = m%n;
		if(t == 0)
			return n;
		else
		{
			gys(n, t);
		}
	}
	else if(m == n)
	{
		return m;
	}
	else if(m<n)
	{
		t = n%m;
		if(t == 0)
		{
			return m;
		}
		else
		{
			gys(m, t);
		}
	}
}

int gbs(int m, int n, int x)
{
	return (m*n/x);
}

int main()
{
	int m, n, x, y;
	scanf("%d%d", &m, &n);
	x = gys(m, n);
	y = gbs(m, n, x);
	printf("最大公约数为:%d\n最小公倍数为:%d\n", x, y);
	return 0;
}
 
