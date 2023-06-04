#include<stdio.h>
//每行输出对应矩阵行元素之和
int main()
{
	int arr[100][6],i,j,n,m,sum;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+arr[i][j];
		}
		printf("%d\n",sum);
	}
	return 0;
}
