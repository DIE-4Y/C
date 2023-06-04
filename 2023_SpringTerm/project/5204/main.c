#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int n;
    freopen("5204.txt", "r", stdin);
    scanf("%d", &n);
    while(n--)
    {
        int ret, i, j, num[1000] = {0};
        scanf("%d", &ret);
        for(i = 0; ret!= 0; i++)
        {
            num[i] = ret % 2;
            ret /= 2;
        }
        for(j = 0; j < i-1; j++)
        {
            if(num[j])
                printf("%d ", j);
        }
        printf("%d\n", i-1);
        for(j = 0; j < i; j++)
            num[j] = 0;
    }
    return 0;
}
