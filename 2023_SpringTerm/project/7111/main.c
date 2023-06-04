#include <stdio.h>
#include <stdlib.h>


#define MAX 101


int main()
{
    freopen("7111.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int count, cont = 0;
        int j, i, room[MAX] = {0};
        scanf("%d", &count);
        for(i = 1; i <= count; i++)
        {
            for(j = 1; (j*i) <= count; j++)
            {
                if(room[j*i])
                    room[j*i] = 0;
                else
                    room[j*i] = 1;
            }
        }
        for(i = 1; i <= count; i++)
        {
            if(room[i])
                cont++;
        }
        printf("%d\n", cont);
    }
    return 0;
}
