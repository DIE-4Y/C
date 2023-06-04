#include <stdio.h>
#include <string.h>
//网页输出


int main()
{
    int num = 0;
    char word[85];
    freopen("4001.txt", "r", stdin);
    while(scanf("%s", word) != EOF)     //scanf读入单词，以空格隔开
    {
        int len = strlen(word);
        if(strcmp(word,"<br>")==0)
        {
            printf("\n"); num = 0;
        }
        else if(!strcmp(word,"<hr>)     //读到<hr>,<br>都要开起新的一行，hr需要判断当前是否为新的一行
        {
            if(num == 0)
            {
                int n = 80;
                while(n--)
                    printf("-");        //将hr，br输入后都会重启一行
            }
            else
            {
                printf("\n");
                int n = 80;
                while(n--)
                    printf("-");

            }
            printf("\n"); num = 0;
        }
        else                            //num记录字符数量，包括空格
        {
            if(num + len > 80)
            {
                num = 0;
                printf("\n");
            }
            num+=(len + 1);
            printf("%s ", word);
        }
    }
    return 0;
}
