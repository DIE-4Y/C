#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tree[10000] = {0};
    int l, m, sum = 0;
    scanf("%d %d", &l, &m);
    while(m--)
    {
        int start = 0, end = 0;
        scanf("%d %d", &start, &end);
        for(; start <= end; start++)
            tree[start] = 1;
    }
    for(m = 0; m <= l; m++)
    {
        if(!tree[m])
            sum++;
    }
    printf("%d\n", sum);
    return 0;
}
