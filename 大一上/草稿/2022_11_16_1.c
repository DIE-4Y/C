#include<stdio.h>
//把一组数由大到小排序 
int main()
{
	long long arr[10];
    int n,i,k,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(k=i;k<n;k++)
        {
            if(arr[i]<arr[k])
            {
                temp=arr[i];arr[i]=arr[k];arr[k]=temp;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        printf("%ld ",arr[i]);
    }
    printf("%ld",arr[n-1]);
    return 0;
}
