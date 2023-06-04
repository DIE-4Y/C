#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    freopen("5002.txt", "r", stdin);
    int n, r;
    char str[33] = {"\0"};
    while(scanf("%d %d", &n, &r) != EOF)
    {
        if(n < 0)
            printf("-");
        n = abs(n);
        int i, j;
        for(i = 0; n != 0; i++)
        {
            if(n % r >= 10)
            {
                switch(n%r)
                {
                    case 10: str[i] = 'A';break;
                    case 11: str[i] = 'B';break;
                    case 12: str[i] = 'C';break;
                    case 13: str[i] = 'D';break;
                    case 14: str[i] = 'E';break;
                    case 15: str[i] = 'F';break;
                }
            }
            else
                str[i] = (n % r) + '0';
            n /= r;
        }

        for(j = i-1; j >= 0; j--)
        {
            printf("%c", str[j]);
        }
        printf("\n");
        strset(str, '\0');//这个函数在oj上会报错
    }
    return 0;
}
