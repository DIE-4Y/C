#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("7201.txt", "r", stdin);
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(a == b)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
