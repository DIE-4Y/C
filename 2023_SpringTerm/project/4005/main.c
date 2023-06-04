#include <stdio.h>
#include <string.h>


int main()
{
    freopen("4005.txt", "r", stdin);
    int i, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        char str[1005] = {"\0"};
        scanf("%s",str);
        int j, l = strlen(str), count = 1;
        for(j = 0; j < l; j++)
        {
            if(str[j] == str[j + 1])
                count++;
            else
            {
                printf("%d%d",count, str[j] - '0');
                count = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
