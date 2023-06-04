#include <stdio.h>
#include <string.h>


int main()
{

    freopen("4011.txt", "r", stdin);
    while(1)
    {
        char str[260] = {"\0"};
        gets(str);
        if(!strcmp(str, "#"))
            break;
        long i, sum = 0, ret;
        for(i = 0 ; i < strlen(str); i++)
        {
            if((str[i] <= 'Z') && (str[i] >= 'A'))
            {
                ret = (i+1) * (str[i] - 'A' + 1);
                sum += ret;
            }
        }
        printf("%ld\n", sum);
    }
    return 0;
}
