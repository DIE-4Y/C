#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 11

int main()
{
    freopen("9002.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--)      //判断大循环第几块
    {
        int b;
        while(scanf("%d ", &b) != EOF)      //判断是否有读入以结束第一块循环
        {
            if(!b)              //由于给的进制为2~10如果为0则一大块循环结束
                continue;
            int i, len, bcs = 0, sz[MAX] = {0}, ys = 0;
            char num[MAX] = {"\0"};
            scanf("%s", num);
            len = strlen(num);
            for(i = 0; i < len; i++)//由于无法直接读入到数字字串中需要先用字符串读入
            {
                sz[i] = num[i] - '0';//再将字符串进行处理存入到数字数组中
                bcs += sz[i];
            }
            for(i = 0; i < len; i++)//将一位数字进行取模
            {
                ys += sz[i];
                if(ys >= bcs)       //如果这一位数比除数大就可以直接进行取模操作
                {
                    ys = (ys % bcs);//如果这一位数不比除数大进行取模后得到的应是本身所以不用处理
                }
                ys = ys*b;          //将这取模得到的数字乘上位权再加上下一位
            }                       //循环进行以上操作
            if(!ys)                 //判断并且进行输出
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}
