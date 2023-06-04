#include<stdio.h>
int main()
{
	int arr[15]={1,2,4,6,8,9,12,15,149,156};
	int i;
	int n;
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		int left=0,right=9;
		if(arr[i]<n&&arr[i+1]>=n)
		{
			for(right=10;right>i;right--)
			{
				arr[right]=arr[right-1];
			}
			arr[i]=n;break;
		}
		
	}
	for(i=0;i<11;i++)
	{
		printf("%5d",arr[i]);
	}
	return 0; 
}
