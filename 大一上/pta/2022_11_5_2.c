#include<stdio.h>
//数组中插入一个数，插入后，数组元素仍按升序排列

int main()
{
    int arr[11]={1,2,4,6,8,9,12,15,149,156};
    int i,n,temp;
    scanf("%d",&n);
    arr[10]=n;
    for(i=10;i>0;i--)
    {
    	if(arr[i]<arr[i-1])
    	{
    		temp=arr[i];
    		arr[i]=arr[i-1];
    		arr[i-1]=temp;
		}
	}
	for(i=0;i<11;i++)
	{
		printf("%5d",arr[i]);
	}
    return 0;
}
