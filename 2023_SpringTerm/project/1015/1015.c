#include<stdio.h>


int main()
{
	float f, c;
	freopen("1015.txt", "r", stdin);		//���ļ����л����¶�ת��Ϊ��λС���������¶� 
	while(scanf("%f", &f) != EOF)
	{
		c=5 * (f-32) / 9.0;
		printf("%.3f\n", c);
	}
	return 0;
}
