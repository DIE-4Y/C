#include <stdio.h>
#include <string.h>
//��ҳ���


int main()
{
    int num = 0;
    char word[85];
    freopen("4001.txt", "r", stdin);
    while(scanf("%s", word) != EOF)     //scanf���뵥�ʣ��Կո����
    {
        int len = strlen(word);
        if(strcmp(word,"<br>")==0)
        {
            printf("\n"); num = 0;
        }
        else if(!strcmp(word,"<hr>)     //����<hr>,<br>��Ҫ�����µ�һ�У�hr��Ҫ�жϵ�ǰ�Ƿ�Ϊ�µ�һ��
        {
            if(num == 0)
            {
                int n = 80;
                while(n--)
                    printf("-");        //��hr��br����󶼻�����һ��
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
        else                            //num��¼�ַ������������ո�
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
