#include<stdio.h>
#define n 3
//写一个函数能够让3*3的行列式转置 
void my_switch(int arr[n][n])
{
	int x, y;
	for(x = 0; x < n; x++)
	{
		for(y = x; y < n; y++)
		{
			int tmp;
			tmp = arr[x][y];
			arr[x][y] = arr[y][x];
			arr[y][x] = tmp;
		}
	}
}

int main()
{
	int arr[n][n], i, j;
	for(i = 0;i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	my_switch(arr);
	printf("\n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j<n; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
