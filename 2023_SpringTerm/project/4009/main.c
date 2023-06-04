#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3081

int main()
{
    freopen("4009.txt", "r", stdin);
    char str[80] = {"\0"};
    while(1)
    {
        scanf("%s", str);
        if(!strcmp(str, "*"))
            break;
        int i, j, k = 0, flag = 0, x = 0;//flag = 0表示是令人惊讶的字符串
        if(strlen(str) != 1)
        {
            for(i = 0; i < strlen(str); i++)    //i开始寻找相同的字符
            {
                for(j = i+1; j < strlen(str); j++)    //j是否与i字符相同
                {
                    if(str[i] == str[j])
                    {
                        if(j == strlen(str) - 1)
                            break;
                        else
                        {
                            for(k = 1; k <= strlen(str)-j-1; k++)   //如果i后k个字符与j后k个字符相同就不是惊讶字符串
                                if(str[i+k] == str[j+k])            //特别注意停止循环的条件
                                    flag = 1;
                        }
                    }
                    if(flag)
                        break;
                }
                if(flag)
                    break;
            }
        if(flag)
            printf("%s is NOT surprising.\n", str);
        else
            printf("%s is surprising.\n", str);
        }
        else
            printf("%s is surprising.\n", str);
    }
    return 0;
}
