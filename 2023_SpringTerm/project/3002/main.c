#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("3002.txt", "r", stdin);
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF)
    {
        if(!n && !m)
            break;
        int countN[10001] = {0};
        int flagN[10001] = {0};
        int num, i, count = 0;
        for(i = 0; i < m; i++)
        {
            scanf("%d", &num);
            if(!countN[num])
                countN[num] = 1;
            else
            {
                flagN[num]++;
                if(flagN[num] == 1)
                    count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
