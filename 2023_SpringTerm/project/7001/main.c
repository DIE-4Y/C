#include <stdio.h>
#include <stdlib.h>


#define MAX 250001


int main()
{
    freopen("7001.txt", "r", stdin);
    int n;
    while(scanf("%d", &n) != EOF)
    {
        long long num[MAX] = {0};
        int i, j, temp;
        for(i = 1 ; i <= n; i++)
            scanf("%d", &num[i]);
        for(i = 1; i < n; i++)
        {
            for(j = 1; j <= n-i; j++)
            {
                if(num[j] > num[j+1])
                {
                    temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        }
        if((n % 2) == 0)
            printf("%.1f\n", (num[n / 2]+ num[n / 2 + 1]) * 0.5);
        else
            printf("%.1f\n", num[n / 2 + 1] * 1.0);
    }
    return 0;
}
