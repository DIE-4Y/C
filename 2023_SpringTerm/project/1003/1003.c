#include<stdio.h>


int main()
{
	freopen("1003.txt", "r", stdin);
	while(1)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if((a == 0)&&(b == 0 ))			//һֱ���a+b��ֵ��ֱ������0,0���� 
		{
			break;
		}
		else
		{
			printf("%d\n", a + b);
		}
	}
	return 0;
}
