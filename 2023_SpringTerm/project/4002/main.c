#include <stdio.h>
#include<string.h>
//������ĸ������ߵ���ĸ

int main()
{
    char str[500];
    freopen("4002.txt", "r", stdin);
    char a[60] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";   //��Ҫ�������ĸ������ڱȽ�
    int i, j, lena = strlen(a);
    while(gets(str) != NULL)
    {
        int lenb = strlen(str);
        for(i = 0; i < lenb; i++)
        {
            for(j = 0; j < lena; j++)
            if(str[i] == a[j])
            {                                                       //��ԭ����ĸ�滻�����
                str[i] = a[j - 1];break;
            }
        }
        puts(str);
    }
    return 0;
}
