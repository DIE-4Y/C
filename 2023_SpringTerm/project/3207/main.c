#include <stdio.h>

//判断数字阶梯



int main()
{
    int i, n;
    freopen("3207.txt", "r", stdin);
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if((a == b)||(a == b + 2))//a,b只能相等或相差2
        {                         //否则不存在
            if(a % 2 == 0)
                printf("%d\n",a + b);//x在偶数上是就横纵坐标相加
            else
                printf("%d\n",a + b - 1);//x在奇数上时横纵坐标相加再减1
        }
        else
            printf("No Number\n");
    }
    return 0;
}
