#include <stdio.h>


int main()
{
    int n;
    printf("Cards  Overhang\n");
    freopen("3112.txt", "r", stdin);
    while(scanf("%d", &n) != EOF)
    {
        int i;
        double sum = 0;
        for(i = 1; i <= n; i++)
        {
            sum+= 1.0/(2*i);
        }
        printf("%5d%10.3lf\n",n ,sum);
    }
    return 0;
}
