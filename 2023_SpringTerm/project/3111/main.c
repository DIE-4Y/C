#include <stdio.h>
//求最小公倍数

int main()
{
    int m, n;
    freopen("3111.txt", "r", stdin);
    while(scanf("%d %d", &m, &n) != EOF)
    {
        int min, max = m * n, i;
        if(m > n)
            min = m;
        else
            min = n;
        for(i = min; i <= max; i++)
        {
            if(i%m == 0 && i%n == 0)
            {
                printf("%d\n", i); break;
            }
        }
    }
    return 0;
}
