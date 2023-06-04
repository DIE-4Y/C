#include<stdio.h>
//求冒泡排序法进行k次的结果 

int main()
{
	int arr[105]={0};
	int i,temp,n,k,j;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];arr[j]=arr[j+1];arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("%d",arr[n-1]);
	return 0;
}
