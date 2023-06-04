#include <stdio.h>
#include<string.h>


int main()
{
    int i, ch_num[30] = {0};
    char word;
    freopen("3009.txt", "r", stdin);
    while(scanf("%c", &word) != EOF)
    {
        if((word <= 'Z') && (word >= 'A'))
            ch_num[word - 'A']++;
    }
    int max = ch_num[0];
    for(i = 1; i < 26; i++)
    {
        if(max < ch_num[i])
            max = ch_num[i];
    }
    for(; max > 0; max--)
    {
        for(i = 0; i < 26; i++)
        {
            if(ch_num[i] >= max)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for(i = 0; i < 26; i++)
    {
        printf("%c ",'A' + i);
    }
    return 0;
}
