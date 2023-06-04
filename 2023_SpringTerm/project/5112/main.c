#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    freopen("5112.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int a, b, c, tempa, tempb, tempc;
        scanf("%d %d %d", &a, &b, &c);
        int max = 0;
        tempa = a, tempb = b, tempc = c;
        while(tempa)                    //用max表示进制
        {
            if((tempa % 10) > max)     //禁止数一定是大于数中的任何一位
            {
                max = tempa % 10;
            }
            tempa /= 10;
        }
        while(tempb)
        {
            if((tempb % 10) > max)
            {
                max = tempb % 10=;
            }
            tempb /= 10;
        }
        while(tempc)
        {
            if((tempc % 10) > max)
            {
                max = tempc%10;
            }
            tempc /= 10;
        }
        int flag = 0,weight;
        for(max++; max <= 16; max++)    //由于之前取的禁止刚好等于最大的一位
        {                               //max需要++
            int suma = 0, sumb = 0, sumc = 0;
            tempa = a, tempb = b, tempc = c, weight = 1;
            while(tempa)                //分别求每一个数在不同进制下十进制数值
            {
                suma += (tempa % 10) * weight;
                tempa /= 10;
                weight *= max;
            }
            weight = 1;
            while(tempb)
            {
                sumb += (tempb % 10) * weight;
                tempb /= 10;
                weight *= max;
            }
            weight = 1;
            while(tempc)
            {
                sumc += (tempc % 10) * weight;
                tempc /= 10;
                weight *= max;
            }
            if(sumc == (sumb * suma))       //如果在某一个进制下相等就退出循环
            {
                flag = 1;                   //flag用于打印时的判断，为1就有，为0就没有
                break;
            }
        }
        if(flag)
        {
            printf("%d\n", max);
        }
        else
            printf("0\n");
    }
    return 0;
}
