#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    freopen("5102.txt", "r", stdin);
    while(1)
    {
        int n;
        scanf("%d", &n);
        if(!n)
            break;
        int sum10 = 0, sum12 = 0, sum16 = 0;
        int temp = n;
        while(temp)
        {
            sum10 += temp % 10;
            temp /= 10;
        }
        temp = n;
        while(temp)
        {
            sum12 += temp % 12;
            temp /= 12;
        }
        temp = n;
        while(temp)
        {
            sum16 += temp % 16;
            temp /= 16;
        }
        if((sum10 == sum12) && (sum12 == sum16))
            printf("%d is a Sky Number.\n", n);
        else
            printf("%d is not a Sky Number.\n", n);
    }
    return 0;
}
