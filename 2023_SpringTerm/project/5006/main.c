#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    freopen("5006.txt", "r", stdin);
    char num[8] = {"\0"};
    int a, b;
    while(scanf("%s %d %d ", num, &a, &b) != EOF)
    {
        int sum = 0, weight = 1, count = 0, i, n, len = strlen(num);
        char str[8] = {"\0"};
        for(len--; len>= 0; len--)
        {
            if(num[len] <= '9' && num[len] >= '0')
                sum += (num[len] - '0') * weight;
            else
                sum += (num[len] - 'A' + 10) * weight;
            weight *= a;
        }
        for(i = 0; sum != 0; i++)
        {
            if((sum % b) < 10)
                str[i] = '0' + (sum % b);
            else
                str[i] = 'A' + (sum % b) - 10;
            sum /= b;
        }
        len = i;
        if(i >= 7)
            printf("  ERROR\n");
        else
        {
            for(i = 0; i < 7 - len; i++)
                printf(" ");
            for(len --; len >= 0; len--)
                printf("%c", str[len]);
            printf("\n");
        }
    }
    return 0;
}
