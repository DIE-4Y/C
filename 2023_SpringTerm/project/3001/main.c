#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("3001.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int tempa = a, tempb = b, temp;
        if(a < b)//比较大小非常重要
        {
            a = tempb;
            b = tempa;
        }
        while(a % b)
        {
            temp = a % b;
            a = b;
            b = temp;
        }
        printf("%d\n",b);
    }
    return 0;
}
