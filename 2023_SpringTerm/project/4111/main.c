#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//输入n个浮点数，要求把这n个浮点数重新排列后再输出。要求每个浮点数的小数点在同一列


int main()
{
    freopen("4111.txt", "r", stdin);
    int i = 0, j, n, max = 0;
    char str[10001][51] = {{"\0"}};//将小数用数组存储
    int num[10001] = {0};
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        for(j = 0; j < strlen(str[i]); j++)
        {
            if(str[i][j] == '.')
            {
                num[i] = j;//确定每一个数的小数点位置
                break;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        if(max < num[i])
            max = num[i];
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < max - num[i]; j++)
            printf(" ");//将不够的位数补齐
        printf("%s\n",str[i]);
    }
    return 0;
}
