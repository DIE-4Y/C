#include<stdio.h>
//将给定的n个整数存入数组中，将数组中的这n个数逆序存放，再按顺序输出数组中的元素 
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
