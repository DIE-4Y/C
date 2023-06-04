#include<stdio.h>


int main()
{
	long long n, k, i, j,arr[105];
	scanf("%ld %ld",&n, &k);
	for(i = 0; i<n; i++)
	{
		scanf("%ld",&arr[i]);
	}
	for(i = 0; i<k; i++)
	{
		for(j = 0; j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp = arr[j]; arr[j] = arr[j+1]; arr[j+1] = tmp;
			}
		}
	}
	for(i = 0; i<n-1; i++)
	{
		printf("%ld ",arr[i]);
	}
	printf("%ld",arr[n-1]);
	return 0;
}
