#include<stdio.h>


int main()
{
	int k, i, j, counter = 0;
	for(i = 101; i<=200;i+=2)
	{
		k = sqrt(i);
		for(j = 2; j<=k; j++)
			if(i%j == 0)
				break;
		if(j >= k)
		{
			printf("%6d", i);
			counter++;
			if(counter%10 == 0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
