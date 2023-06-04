#include <stdio.h>  
//求一个在 n阶方阵中某元素在某行上最大、在某列上最小
 
int main()
{  
    int n;  
    scanf("%d", &n);  
    int i, j, mat[n][n];  
    
    for( i=0; i<n; i++ )  
        for( j=0; j<n; j++ )  
            scanf("%d", &mat[i][j]);  
    
    int k=0, y=0, flag=0, p=0;  
    
    if( n==1 )  
        printf("0 0");
    else
	{  
        for( i=0; i<n; i++ )
		{  
            y=i;  
            for( p=0; p<n; p++ )
                if( mat[i][k] <= mat[i][p] ) 
                    k=p;  
            
            for( j=0; j<n; j++ )
                if( mat[y][k] > mat[j][k] )
				{  
                    y=j;  
                    break;  
                }  
            
            if( i == y )
			{  
                flag=1;  
                break;  
            }  
        }  
        
        if( flag )  
            printf("%d %d", i, k);  
        else 
			printf("NONE");  
    }  
    return 0;  
}  





/*
#include<stdio.h>
//求一个在 n阶方阵中某元素在某行上最大、在某列上最小
int main()
{
	int n,m,i,j,k,l,yes,num=0,max,min,arr[6][6];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		max=arr[i][0];
		for(j=0;j<n;j++)
		{	
			if(arr[i][j]>max)
			{
				max=arr[i][j];
				l=j;
			}
		}
		min=max;
		yes=0; 
		for(k=0;k<n;k++)
		{
			if(min>arr[k][l])
			{
				yes++;
				if(yes<=n) num++;
				break;
			}
			else if((k==(n-1))&&min<=arr[n-1][l])
			{
				printf("%d %d\n",i,l);
			}
		}
	}
	if(num==n)
		printf("NONE\n");
	return 0;
}
*/ 
