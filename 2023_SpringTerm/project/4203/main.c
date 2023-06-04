#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i, n;
    freopen("4203.txt", "r", stdin);
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("String #%d\n", i+1);
        char str[55] = {"\0"};
        int j;
        scanf("%s", str);
        for(j = 0; j < strlen(str); j++)
        {
            if(str[j] != 'Z')
                str[j] = str[j] + 1;
            else
                str[j] = 'A';
        }
        printf("%s\n\n", str);
    }
    return 0;
}
