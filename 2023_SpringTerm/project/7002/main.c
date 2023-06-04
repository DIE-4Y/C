#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




int main()
{
    freopen("7002.txt", "r", stdin);
    int max = 11, min = 0;
    while(1)
    {
        int n;
        char str[10] = {"\0"}, streg[3][10] = {"too high", "too low", "right on"};
        scanf("%d ", &n);
        if(!n)
            break;
        gets(str);
        if(!strcmp(str, streg[0]))
        {
            if(n < max)
                max = n;
        }
        else if(!strcmp(str, streg[1]))
        {
            if(n > min)
                min = n;
        }
        else
        {
            if(n < max && n > min)
            {
                printf("Stan may be honest\n");
            }
            else
            {
                printf("Stan is dishonest\n");
            }
            max = 11;
            min = 0;
        }

    }
    return 0;
}
