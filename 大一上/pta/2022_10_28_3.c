#include<stdio.h>
//��������n�������Ӵ�С��������

int main()
{
	int n,arr[10]={0};
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int k;
	for(k=0;k<n;k++)
	{
		int max,x,t;
		for(max=k,x=k;x<n;x++)
		{
			if(arr[max]<arr[x])
			{
				t=arr[max];
				arr[max]=arr[x];
				arr[x]=t;
				
			}
			t=arr[k];
			arr[k]=arr[max];
			arr[max]=t;
		}
	}
	for(i=0;i<n-1;i++)
		printf("%d ",arr[i]);
	printf("%d",arr[n-1]);
	return 0;
} 
