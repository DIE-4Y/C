#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int n;
    freopen("4113.txt", "r", stdin);
    scanf("%d", &n);
    while(n--)
    {
        int t, i, sum = 0;
        char str1[81] = {"\0"}, str2[81] = {"\0"};
        scanf("%d%s%s", &t,str1, str2);
        for(i = 0; i <strlen(str1); i++)
        {
            if(str1[i] != str2[i])
                break;
        }
        sum = t * ((strlen(str1) - i) + (strlen(str2) - i));
        printf("%d\n", sum);
    }
    return 0;
}
