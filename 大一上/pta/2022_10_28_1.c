#include<stdio.h>
//求最大值 
int main()
{
	int n,arr[10]={0};
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max,x;
	for(x=1,max=0;x<n;x++)
	{
		if(arr[max]<arr[x])
			max=x;
	}
	printf("%d %d",arr[max],max);
	return 0;
} 
