#include <stdio.h>
#include <string.h>
//ͳ���ַ��������ֵĸ���


int main()
{
    int i, j, n;
    freopen("4003.txt", "r", stdin);
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        //getchar();                      //��ȡ�س���ֹ��ȡ����
        char str[1000] = "\0";
        scanf("%s", str);           //������getsֻ����scanf��֪��Ϊʲô
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
