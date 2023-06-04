#include<stdio.h>


int main()
{
	int i, j, arr[15];
	arr[0] = 1; arr[1] = 1;
	for(i = 2; i<12; i++)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}
	for(i = 0; i<12; i++)
	{
		printf("%6d",arr[i]);
		if((i+1)%3 == 0)
			printf("\n");
	}
	return 0;
}
