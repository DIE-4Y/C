#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{
    int n;
    freopen("6002.txt", "r", stdin);
    scanf("%d", &n);
    while(n--)
    {
        int time1[6] = {0};
        int time2[6] = {0};
        scanf("%d/%d/%d-%d:%d:%d", &time1[0], &time1[1], &time1[2], &time1[3], &time1[4], &time1[5]);
        time2[2] = time1[0];
        time2[1] = time1[2];
        time2[0] = time1[1];
        time2[4] = time1[4];
        time2[5] = time1[5];
        if(time1[3] < 12)
        {
            if(time1[3] == 0)
            {
                time2[3] = 12;
            }
            else
            {
                time2[3] = time1[3];
            }
            if(time2[0] < 10)
                printf("0%d/", time2[0]);
            else
                printf("%d/", time2[0]);

            if(time2[1] < 10)
                printf("0%d/", time2[1]);
            else
                printf("%d/", time2[1]);

            printf("%d-", time2[2]);

            if(time2[3] < 10)
                printf("0%d:", time2[3]);
            else
                printf("%d:", time2[3]);

            if(time2[4] < 10)
                printf("0%d:", time2[4]);
            else
                printf("%d:", time2[4]);

            if(time2[5] < 10)
                printf("0%dam\n", time2[5]);
            else
                printf("%dam\n", time2[5]);
        }
        else
        {
            if(time1[3] == 12)
            {
                time2[3] = 12;
            }
            else
            {
                time2[3] = time1[3] - 12;
            }
            if(time2[0] < 10)
                printf("0%d/", time2[0]);
            else
                printf("%d/", time2[0]);

            if(time2[1] < 10)
                printf("0%d/", time2[1]);
            else
                printf("%d/", time2[1]);

            printf("%d-", time2[2]);

            if(time2[3] < 10)
                printf("0%d:", time2[3]);
            else
                printf("%d:", time2[3]);

            if(time2[4] < 10)
                printf("0%d:", time2[4]);
            else
                printf("%d:", time2[4]);

            if(time2[5] < 10)
                printf("0%dpm\n", time2[5]);
            else
                printf("%dpm\n", time2[5]);
        }
    }
    return 0;
}
