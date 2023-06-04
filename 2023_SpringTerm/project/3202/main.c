#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a;
    while(scanf("%d", &a) != EOF)
    {
        int n = 5, b, sum = 0;
        while(n--)
        {
            scanf("%d", &b);
            if(b < a)
                sum+=b;
        }
        printf("%d\n", sum);
    }
    return 0;
}
