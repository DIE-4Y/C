#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��һ��ʮ��������2~16�ǻ���������ǻ����������������������

int main()
{
    freopen("5007.txt", "r", stdin);
    while(1)
    {
        int i, j, n, temp, flag[20] = {0}, huiwen = 0;
        scanf("%d", &n);
        if(!n)
            break;
        char num[10000] = {"\0"};
        char str[10000] = {"\0"};
        for(j = 2; j <= 16; j++)
        {
            int len = strlen(str);          //strset(str,'\0');
            for(i = 0; i <= len; i++)       //strset(num,'\0');�������������飬����oj�ϲ���������
            {
                str[i] = '\0';
                num[i] = '\0';
            }
            temp = n;
            for(i = 0; temp != 0; i++)
            {
                num[i] = '0' + (temp % j);
                temp /= j;
            }
            for(i-- ; i >= 0; i--)
            {
                str[i] = num[strlen(num) - i - 1];
            }
            if(!strcmp(num, str))
            {
                flag[j] = 1;
                huiwen = 1;
            }
        }
        if(!huiwen)
            printf("Number %d is not a palindrom", n);
        else
        {
            printf("Number %d is palindrom in basis", n);
            for(j = 2; j <= 16; j++)
                if(flag[j])
                    printf(" %d", j);
        }
        printf("\n");
    }
    return 0;
}
