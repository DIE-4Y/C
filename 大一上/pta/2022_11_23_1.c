#include<stdio.h>

//输出π的近似值

double one(double n)
{
    if(n==1)
    return 1;
    else
    {
        return (n-1)/(2*n-1)*one(n-1);
    } 
}

int main()
{
    double eps,i=1,re,sum=0;
    scanf("%le",&eps);		
    {
        re=one(i);	
        sum+=re;
        i++;
    }
    while(eps<=re);		//初始精度判断，至少完成一次
    printf("PI = %.5lf",sum*2);
    return 0;
}

/*
double  PI(int i)
{
    if(i == 0)
    {
		return 1.0;
    }
    else
    {
        double j, z = 1, m = 1, ret = 1;
        return i*(PI(i-1))/(2*i-1);
    }
}

int main()

{
	double pi = 1,eps;
	int i;
	scanf("%le",&eps);
	for(i=1; PI(i) >= eps; i++)
	{
		pi = pi + PI(i);
	}
	printf("PI = %.5lf\n", 2*pi);
	return 0;
}
*/

