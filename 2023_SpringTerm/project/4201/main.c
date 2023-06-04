#include <stdio.h>
#include <string.h>


int main()
{
    freopen("4201.txt", "r", stdin);
    char str[205] = {"\0"};
    while(gets(str) != NULL)
    {
        if(!(strcmp(str,"START")))
            continue;
        if(!(strcmp(str,"END")))
        {
            printf("\n");
            continue;
        }
        if(!(strcmp(str,"ENDOFINPUT")))
            break;
        int i, l = strlen(str);
        for(i = 0; i < l; i++)
        {
            if((str[i] >= 'A') && str[i] <= 'Z')
            {
                 if((str[i] - 5) < 'A')
                    str[i] += 21;
                 else
                    str[i] -= 5;
            }
        }
        printf("%s ",str);
    }
    return 0;
}
