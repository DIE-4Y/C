#include<stdio.h>
//输入两个矩阵A和B的元素值，最后求出两个矩阵的和C并输出其元素值

int main()
{
	int A[10][10],B[10][10],C[10][10];
	int n,m,j,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
