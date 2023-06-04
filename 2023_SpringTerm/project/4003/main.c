#include <stdio.h>
#include <string.h>
//统计字符串中数字的个数


int main()
{
    int i, j, n;
    freopen("4003.txt", "r", stdin);
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        //getchar();                      //读取回车防止读取错误
        char str[1000] = "\0";
        scanf("%s", str);           //不能用gets只能用scanf不知道为什么
        int len = strlen(str), num = 0;
        for(j = 0; j < len; j++)
        {
            if((str[j] <= '9') && (str[j] >= '0'))
                num++;
        }
        printf("%d\n", num);
    }
    return 0;
}
