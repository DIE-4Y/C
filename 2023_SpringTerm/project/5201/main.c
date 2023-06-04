#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//进制转化，十进制转化为二进制


int main()
{
    freopen("5201.txt", "r", stdin);
    int n;
    while(scanf("%d", &n) != EOF)
    {
        char num[100000] = {"\0"};
        int temp, i, j;
        for(i = 0; n != 0; i++)
        {
            num[i] = '0' + (n%2);
            n /= 2;
        }
        for(i--; i >= 0; i--)
            printf("%c", num[i]);
        printf("\n");
    }
    return 0;
}
