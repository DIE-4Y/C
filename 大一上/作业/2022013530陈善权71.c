#include<stdio.h>
//д��������С�����������Լ�� 

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
	printf("���Լ��Ϊ:%d\n��С������Ϊ:%d\n", x, y);
	return 0;
}
 
