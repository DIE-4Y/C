#include<stdio.h>
//��������n���������������У��������е���n���������ţ��ٰ�˳����������е�Ԫ�� 
int main()
{
	int n,arr[10]={0};
	scanf("%d",&n);
	int i,k=n-1;
	for(i=0;i<=k;i++)
	{
		scanf("%d",&arr[k-i]);
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("%d",arr[k]);
	return 0;
}
