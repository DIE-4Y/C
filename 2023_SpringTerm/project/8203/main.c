#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    freopen("8203.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int result[12], i, j;
        for(i = 0 ;i < 12; i++)
            result[i] = 1;
        char str1[5], str2[5], str3[5];
        for(j = 0; j < 3; j++)
        {
            scanf("%s %s %s", str1, str2, str3);
            if(!strcmp(str3, "even"))
            {
                for(i = 0 ; i < 4; i++)
                {
                    result[str1[i] - 'A'] = 0;
                    result[str2[i] - 'A'] = 0;
                }
            }
            else if(!strcmp(str3, "up"))
            {
                for(i = 0 ; i < 4; i++)
                {
                    if(result[str2[i] - 'A'])
                        result[str2[i] - 'A'] = 2;  //2 代表轻
                    if(result[str1[i] - 'A'])
                        result[str1[i] - 'A'] = -1; //-1代表重
                }
            }
            else
            {
                for(i = 0 ; i < 4; i++)
                {
                    if(result[str2[i] - 'A'])
                        result[str2[i] - 'A'] = -1;
                    if(result[str1[i] - 'A'])
                        result[str1[i] - 'A'] = 2;
                }
            }
        }
        for(i = 0 ; i < 12; i++)
        {
            if(result[i])
            {
                if(result[i] == -1)
                    printf("%c is the counterfeit coin and it is heavy.\n",i + 'A');
                else if(result[i] == 2)
                    printf("%c is the counterfeit coin and it is light.\n",i + 'A');
            }
        }
    }
    return 0;
}
