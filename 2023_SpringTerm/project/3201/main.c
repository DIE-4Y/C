#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int a, b, k;
    while(1)
    {
        sacanf("%d %d %d", &a, &b, &k);
        if(!a && !b)
            break;
        double tile1 = a % (int)pow(10, k);
        double tile2 = b % (int)pow(10, k);
        if(tile1 == tile2)
            printf("-1\n");
        else
            printf("%d\n", a + b);
    }
    return 0;
}
