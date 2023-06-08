#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    freopen("9001.txt" ,"r", stdin);
    char num1[11] = {"\0"}, num2[11] = {"\0"};
    while(scanf("%s %s", num1, num2) != EOF)
    {
        if(!strcmp(num1, "0") && !strcmp(num2, "0"))
            break;
        int len1 = strlen(num1) - 1;
        int len2 = strlen(num2) - 1;
        int jw = 0, count = 0, i, j;
        for(; len1>=0 && len2 >= 0; len1--, len2--)     //����ǰ�Ƚϣ����˳��Ȳ����ʱ������д���
        {
            if((num1[len1] - '0') + (num2[len2] - '0') + jw >= 10)
            {
                count++;
                jw = 1;
            }
            else
                jw = 0;
        }
        if(len1 >= 0)   //������û�þ��ͼ������Ͻ�λ
        {
            for(; len1 >= 0; len1--)
            {
                if((num1[len1] - '0') + jw >= 10)
                {
                    count++;
                    jw = 1;
                }
                else
                    jw = 0;
            }
        }
        else if(len2 >= 0)
        {
            for(; len2 >= 0; len2--)
            {
                if((num2[len2] - '0') + jw >= 10)
                {
                    count++;
                    jw = 1;
                }
                else
                    jw = 0;
            }
        }
        if(!count)
            printf("No carry operation.\n");
        else if(count == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", count);
    }
    return 0;
}
