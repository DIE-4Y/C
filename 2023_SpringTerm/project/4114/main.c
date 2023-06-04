#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100


int main()
{
    freopen("4114.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int m, len;
        char str[MAX] = {"\0"}, ch = '\0';
        scanf("%d", &m);
        while(m--)
        {
            while(scanf("%s%c", str, &ch) != EOF)
            {
                len = strlen(str);
                for(len-- ; len >= 0; len--)
                {
                    putchar(str[len]);
                }
                putchar(ch);
                ch = '\0';
            }
        }
    }
    return 0;
}



//#include<stdio.h>
//#include<string.h>
//
//
//
//int main()
//{
//    int n, m;
//    freopen("4114.txt", "r", stdin);
//    char a[1000];
//    scanf("%d", &m);
//    while(m--)
//    {
//        scanf("%d ",&n);
//        while(n--)
//        {
//            int i,k, len, j=0, flag = 0;
//            gets(a);
//            len=strlen(a);
//            for(i=0;i<=len;i++)
//            {
//                 if(a[i]==' '||a[i]=='\0')
//                 {
//                     flag++;
//                      for(k=i-1;k>=j;k--)//当遇到是空格或者整个字符结束的时候，直接让k等于前一个数，逆序输出
//                        {
//                            printf("%c",a[k]);
//                        }
//                      if(a[i]!='\0' && flag == 1)
//                            printf(" ");//因为条件是不为空格的情况，所以还要逆序完之后直接输出
//                      j=i;//记录遇见空格或者标点符号时，的i
//                 }
//            }
//            printf("\n");
//
//        }
//    }
//    return 0;
//}
