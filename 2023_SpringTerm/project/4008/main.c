#include<stdio.h>
#include<string.h>


int main()
{
    int t;
    freopen("4008.txt", "r", stdin);
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        char stra[5005] = {"\0"}, temp[5005] = {"\0"}, strb[5005] = {"\0"};  //stra存标准样例，strb存比较样例
        while(strcmp(temp,"START"))
            gets(temp);
        while(1)
        {
            gets(temp);          //将回车在最后录入，若只有一个回车temp将读取到一个空字符串使得strlen（temp）为0
            if(!strcmp(temp,"END"))
                break;
             if(strlen(temp) != 0)
                 strcat(stra,temp);
            strcat(stra,"\n");
        }
        while(strcmp(temp,"START"))
            gets(temp);
        while(gets(temp))
        {
            if(!strcmp(temp,"END"))
                break;
            if(strlen(temp) != 0)
                strcat(strb,temp);
            strcat(strb,"\n");
        }

        if(!strcmp(stra, strb))
            printf("Accepted\n");
        else
        {
            int i,j, k = 0,len = strlen(stra);
            for(i = 0; i < len; i++)            //双重循环保证空格制表符回车都删除
            {
                for(j = 0; j < len; j++)
                {
                    if((stra[j] == ' ') || (stra[j] == '\n') || (stra[j] == '\t'))  //将字符串中的多余空格，制表符，回车去除
                    {
                        for(k = j; k < strlen(stra); k++)
                            stra[k] = stra[k + 1];
                    }
                }
            }
            len = strlen(strb);
            for(i = 0; i < len; i++)
            {
                for(j = 0; j < len; j++)
                {
                    if((strb[j] == ' ') || (strb[j] == '\n') || (strb[j] == '\t'))
                    {
                        for(k = j; k < strlen(strb); k++)
                            strb[k] = strb[k + 1];
                    }
                }
            }
            if(!strcmp(stra, strb))
            {
                printf("Presentation Error\n");
                continue;
            }
            else
            {
                printf("Wrong Answer\n");
                continue;
            }
        }
    }
    return 0;
}
