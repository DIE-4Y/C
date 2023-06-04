#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char[] zc(char str1[],int len1, char str2[], int len2)
{
    char str[100] = {"\0"};
    int i, j = 0, flag = 0, start = -1, end;
    for(i = 0 ; i < len1; i++)
    {
        for(; j < len2; j++)
        {
            if(str2[j] == str1[i])
            {
                if(!flag && start == -1)
                    start = j;
                flag = 1;
                goto out;
            }
            if((str2[j] != str1[i]) && flag )
            {
               end = j--l;
               break;
            }
        }
        if(flag)
        {
            for(j = 0; start <= end; start++)
            str[j++] = str2[start];
        }
        else
        {

        }
        out:;
    }
    return str;
}


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, i, j, len = 0;
        char str[n][100] = {"\0"};
        scanf("%d", &n);
        while(n--)
        {
            scanf("%s", str[n]);
            if()
        }
    }
    return 0;
}
