#include <stdio.h>
#include <stdlib.h>
//将一个四位数且小于等于n十进制转化为12,16进制之后若每一位相加的和都相等就输出，


int main()
{
    freopen("5001.txt", "r", stdin);
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int i, flag = 0;
        for(i = 1000; i <= n; i++)
        {
            int ret1 = 0, ret2 = 0, ret3 = 0, ret = 0;
            ret = i;
            while(ret)
            {
                ret1 += (ret % 10);
                ret /= 10;
            }
            ret = i;
            while(ret)
            {
                ret2 += (ret % 12);
                ret /= 12;
            }
            ret = i;
            while(ret)
            {
                ret3 += (ret % 16);
                ret /= 16;
            }
            if((ret1 == ret2) && (ret2 == ret3) && (ret1 == ret3))
            {
                printf("%d\n", i);
                flag = 1;
            }
        }
        if(!flag)
            printf("0\n");
    }
    return 0;
}
