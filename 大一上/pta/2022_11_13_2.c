#include<stdio.h>
//ִ��k�ΰ�����ĵ�x��λ�õ�Ԫ��ɾ��
int main()
{
	int n,i,j,k,x,arr[101]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	for(j=1;j<=k;j++)
	{
		scanf("%d",&x);
		for(;x<n;x++)
		{
			arr[x]=arr[x+1];
		}
	}
	for(j=1;j<=(n-k-1);j++)
	{
		printf("%d ",arr[j]);
	}
	printf("%d",arr[n-k]);
	return 0;
}

