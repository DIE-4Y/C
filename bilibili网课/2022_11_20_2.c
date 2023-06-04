#include<stdio.h>
#include<string.h>
//写函数查找一排序数组中的某一个数的下标 
int binnery_search(int , int , int);

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10},i,x,y,sz;
	for(i = 0;i <10; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	scanf("%d",&x);
	sz = (sizeof(arr)/sizeof(arr[0])); 
	y = binary_search(arr, x, sz);
	if(y==-1)
	{
		printf("找不到");
	}
	else
	{
		printf("找到了，下标为：%d",y);
	}
	return 0;
}

int binary_search(int arr[], int x, int sz)
{
	int left = 0,right = sz - 1;
	int mid;
	while(left<=right)
	{
		mid = (left+right)/2;
		if(arr[mid]<x)
		{
			left = mid+1;
		}
		else if(arr[mid] > x)
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
	
}
