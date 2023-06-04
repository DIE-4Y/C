#include<stdio.h>
//查找数组中的数
int main()
{
	long long x,n,i,j,arr[10]={0};
	scanf("%ld%ld",&n,&x);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&arr[i]);
	}
	for(i=0,j=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			printf("%ld\n",i);
			j=1;
		}
	}
	if(j!=1)
	{
		printf("Not Found\n");
	}
	return 0;
} 

