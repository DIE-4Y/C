#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int a, b, c, i = 1;
    while(1)
    {
        int flag = 0;
        scanf("%d %d %d", &a, &b, &c);
        if((!a) && (!b) && (!c))
            break;
        printf("Triangle #%d\n", i);
        i++;
        if(a == -1)
        {
            if(c <= b)
                printf("Impossible.\n\n");
            else
                printf("a = %.3lf\n\n", sqrt(pow(c,2) - pow(b, 2)));
        }
        else if(b == -1)
        {
            if(c <= a)
                printf("Impossible.\n\n");
            else
                printf("b = %.3lf\n\n", sqrt(pow(c,2) - pow(b, 2)));
        }
        else
        {
            printf("c = %.3lf\n\n", sqrt(pow(a,2) + pow(b, 2)));
        }
    }
    return 0;
}
