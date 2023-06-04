#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    freopen("5203.txt", "r", stdin);
    int n;
    while(scanf("%d", &n) != EOF)
    {
        getchar();
        long long num = 0;
        for(n--; n >= 0; n--)
        {
            char str[5] = {"\0"};
            gets(str);
            if(!strcmp(str, "- -"))
                num += (long long)pow(2, n);
        }
        printf("%ld\n", num);
    }
    return 0;
}
