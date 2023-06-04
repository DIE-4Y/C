#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("8202.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--)
    {
        double a, b;
        int x, i = 0;
        scanf("%lf %lf", &a, &b);
        for(i = 0 ; i <= 20; i++)
        {
            if((pow(a, i) <= b) && (pow(a, i+1) > b))
            {
                x = i;
                break;
            }
        }
        printf("%d\n", x);
    }
    return 0;
}
