#include <stdio.h>
#include <stdlib.h>


#define MAX 301


int main()
{
    freopen("7104.txt", "r", stdin);
    int n, m;
    while(1)
    {
        scanf("%d %d", &m, &n);
        if(!m && !n)
            break;
        int i = 0, j, sign = 0, cont = m, monkey[MAX] = {0};
        while(cont > 1)
        {
            if(!monkey[i])
            {
                sign++;
                if(sign == 4)
                {
                    sign = 0;
                    monkey[i] = 1;
                    cont--;
                }
            }
            i = (i+1) % m;
        }
        for(i = 0 ; i < m; i++)
        {
            if(!monkey[i])
            {
                printf("%d\n", i+1);
                break;
            }
        }
    }
    return 0;
}
