#include <stdio.h>
#include <stdlib.h>



int main()
{
    freopen("5004.txt", "r", stdin);
    while(1)
    {
        int i, n, k, num[1000] = {0};
        scanf("%d %d", &n, &k);
        if((!n) && (!k))
            break;
        for(i = 0; n!= 0; i++)
        {
            num[i] = (n%2);
            n /= 2;
        }
        for(k--; k >= 0; k--)
        {
            if(num[k])
                printf("- -\n");
            else
                printf("---\n");
        }
        printf("\n");
    }
    return 0;
}
