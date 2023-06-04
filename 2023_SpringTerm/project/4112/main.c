#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//错误代码，未能实现需求


int main()
{
    freopen("4112.txt", "r", stdin);
    int n, i, j, k, t, sum[101] = {0};
    char num[101][16] = {{"\0"}}, temp[16] = {"\0"};
    scanf("%d", &n);
    for(i = 0 ;i < n; i++)
    {
        scanf("%s", temp);
        for(j = 0; j < strlen(temp); j++)
        {
            if(temp[j] == '-')
            {
                for(k = j; k < strlen(temp); k++)
                    temp[k] = temp[k+1];
            }
        }
        for(j = 0; j < strlen(temp); j++)
        {
            if((temp[j] == 'A') || (temp[j] == 'B') || (temp[j] == 'C'))
                temp[j] = '2';
            if((temp[j] == 'E') || (temp[j] == 'F') || (temp[j] == 'D'))
                temp[j] = '3';
            if((temp[j] == 'G') || (temp[j] == 'H') || (temp[j] == 'I'))
                temp[j] = '4';
            if((temp[j] == 'J') || (temp[j] == 'K') || (temp[j] == 'L'))
                temp[j] = '5';
            if((temp[j] == 'M') || (temp[j] == 'N') || (temp[j] == 'O'))
                temp[j] = '6';
            if((temp[j] == 'P') || (temp[j] == 'R') || (temp[j] == 'S'))
                temp[j] = '7';
            if((temp[j] == 'T') || (temp[j] == 'U') || (temp[j] == 'V'))
                temp[j] = '8';
            if((temp[j] == 'W') || (temp[j] == 'X') || (temp[j] == 'Y'))
                temp[j] = '9';
        }
        for(j = 0; sum[j] > 0; j++)
        {
            if(!strcmp(num[j], temp))
            {
                sum[j]++;
                break;
            }
        }
        if(j == strlen(num))
            strcpy(num[j], temp);
    }
    for(j = 0; j < strlen(num); j++)
    {
        for(k = 0; k < strlen(num) - j - 1; k++)
        {
            if(sum[k] > sum[k+1])
            {
                t = sum[k]; sum[k] = sum[k+1]; sum[k+1] = t;
                strcpy(temp, num[k]); strcpy(num[k], num[k+1]); strcpy(num[k+1], temp);
            }
        }
    }
    for(i = 0; i < strlen(sum); i++)
    {
        if(num[i] > 1)
            break;
    }
    if(i < strlen(sum))
    {
        for(i = 0; i < strlen(num); i++)
        {
            for(j = 0; j < 7; j++)
            {
                printf("%d",num[i][j]);
                if(j == 2)
                    printf("-");
            }
            printf(" %d\n", sum[i]);
        }
    }
    else
        printf("No duplicates.\n");
    return 0;
}

