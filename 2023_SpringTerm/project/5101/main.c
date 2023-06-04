#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int arr[1000] = {0};
        int i;
        for(i = 0; n != 0; i++)
        {
            arr[i] = (n % 8);
            n /= 8;
        }
        for(i--; i >= 0; i--)
        {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
