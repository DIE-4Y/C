#include<stdio.h>

int main()
{
	double money, sum = 0.0, average;
	int i;
	freopen("3203.txt", "r", stdin);
	for(i = 0; i < 12; i++)
	{
		scanf("%lf", &money);
		sum += money;
	}
	average = sum / 12;
	printf("$%.2lf", average);
	return 0;
}
