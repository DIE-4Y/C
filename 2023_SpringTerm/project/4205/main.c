#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    freopen("4205.txt", "r", stdin);
    char str[1000] = {"\0"};
    while(scanf("%s",str) != EOF)
    {
        int i, start = 0, sign = 0, count = 1;  //start=1表示相同的字符内部，sign = 1表示相同连续字符的内部，count记录相同字符的个数
        for(i = 0; i < strlen(str); i++)
        {
            if(str[i] == str[i+1])
            {
                count++;
                if(count == 9)
                {
                    if(str[i] == '1')
                        printf("911");
                    else
                        printf("9%c",str[i]);
                    i++; count=1; continue;
                }
                if(!start)
                     start = 1;
                if(sign)
                {
                    printf("1");
                    sign = 0;
                }
            }
            else
            {
                if(start)
                {
                    if(str[i] == '1')
                        printf("%d11", count);
                    else
                        printf("%d%c", count, str[i]);
                    start = 0;
                    count = 1;
                    continue;
                }
                if(!sign)
                {
                    printf("1");
                    sign = 1;
                }
                if(str[i] != '1')
                    printf("%c", str[i]);
                else
                    printf("11");
            }
        }
        printf("\n");
    }
    return 0;
}
