#include <stdio.h>


int main()
{
    freopen("4101.txt", "r", stdin);
    int n, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        char str[1005] = {"\0"};
        int count[30] = {0};
        int j, max = 0, flag = 0;
        scanf("%s", str);
        for(j = 0; j < strlen(str); j++)
            count[str[j]-'a']++;
        for(j = 0; j < 26; j++)
        {
            if(count[j] > max)
            {
                flag = j;
                max = count[j];
            }
        }
        printf("%c %d\n", 'a'+flag, max);
    }
    return 0;
}
