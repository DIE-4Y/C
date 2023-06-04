#include <stdio.h>
#include<string.h>
//输入字母键盘左边的字母

int main()
{
    char str[500];
    freopen("4002.txt", "r", stdin);
    char a[60] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";   //将要输入的字母存进便于比较
    int i, j, lena = strlen(a);
    while(gets(str) != NULL)
    {
        int lenb = strlen(str);
        for(i = 0; i < lenb; i++)
        {
            for(j = 0; j < lena; j++)
            if(str[i] == a[j])
            {                                                       //将原来字母替换后输出
                str[i] = a[j - 1];break;
            }
        }
        puts(str);
    }
    return 0;
}
