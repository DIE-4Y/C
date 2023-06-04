#include<stdio.h>
#include<string.h>


int main() 
{
	int i, k;
	freopen("3206.txt", "r", stdin);
	scanf("%d", &k);
	for(i = 1; i <= k; i++)
	{
		int flag = 0;
		char sex[10];
		double wbc, rbc, hgb, hct, plt;
		scanf("%s %lf %lf %lf %lf %lf", sex, &wbc, &rbc, &hgb, &hct, &plt );
		if(strcmp(sex,"female") == 0)
		{
			if((wbc >= 4.0) && (wbc <= 10.0))
			{
			}
			else
			{
				flag++;
			}
			if((rbc >= 3.5) && (rbc <= 5.5))
			{
			}
			else
			{
				flag++;
			}
			if((hgb >= 110) && (hgb <= 150))
			{
			}
			else
			{
				flag++;
			}
			if((hct >= 36) && (wbc <= 40))
			{
			}
			else
			{
				flag++;
			}
			if((plt >= 100) && (plt <= 300))
			{
			}
			else
			{
				flag++;
			}
			if(!flag)
				printf("normal\n");
			else
				printf("%d\n",flag);
		}
		else
		{
			if((wbc >= 4.0) && (wbc <= 10.0))
			{
			}
			else
			{
				flag++;
			}
			if((rbc >= 3.5) && (rbc <= 5.5))
			{
			}
			else
			{
				flag++;
			}
			if((hgb >= 120) && (hgb <= 160))
			{
			}
			else
			{
				flag++;
			}
			if((hct >= 42) && (wbc <= 48))
			{
			}
			else
			{
				flag++;
			}
			if((plt >= 100) && (plt <= 300))
			{
			}
			else
			{
				flag++;
			}
			if(!flag)
				printf("normal\n");
			else
				printf("%d\n",flag);
		}
	}
	return 0;
}
