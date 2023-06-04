#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("7205.txt", "r", stdin);
    int n;
    while(1)
    {
        scanf("%d", &n);
        if(!n)
            break;
        int person[n], count = 0, flag = 1,i, half = 0;
        for(i = 0 ; i < n; i++)
            scanf("%d", &person[i]);
        while(1)
        {
            for(i = 0; i < n; i++)
            {
                half = person[i] / 2;
                person[i] -= half;
                person[(i + 1) % n] += half;
                if(person[i] % 2)
                    person[i]++;
                if((person[i] != person[0]) && (flag))
                    flag = 0;
            }
            count++;
            if(flag)
            {
                printf("%d %d\n", count, person[i]);
                break;
            }
        }
    }
    return 0;
}
