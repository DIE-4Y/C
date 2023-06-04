#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("7210.txt", "r", stdin);
    int n;
    while(scanf("%d", &n) != EOF)
    {
        printf("n e\n- -----------\n");
        printf("0 1 \n");
        int k = 0,i = 0, jc = 1;
        float e = 1.0;
        for(i = 1; i <= n; i++)
        {
            jc *= i;
            e += 1.0/(jc);
            if(i == 1)
            {
                printf("1 2\n");
            }
            else if(i == 2)
            {
                printf("2 2.5\n");
            }
            else
            {
                printf("%d %f\n", i , e);
            }
        }
        printf("\n");
    }
    return 0;
}
