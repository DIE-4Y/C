#include<stdio.h> 
#include<math.h>


int main()
{
	long long money, year, rate;
	double interest;
	freopen("1022.txt", "r", stdin);
	while(scanf("%ld %ld %ld", &money, &year, &rate) != EOF)
	{
		double k = 1 + rate/100.0;
		interest = money*(pow(k, year)) - money;
		printf("interest=%.2lf\n",interest);
	}
	return 0;
}
