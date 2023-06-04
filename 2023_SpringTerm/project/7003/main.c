#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("7003.txt", "r", stdin);
    while(1)
    {
        int n, f, m, l, q = 120;
        scanf("%d %d %d %d", &n, &f, &m, &l);
        if(!n && !f && !m && !l)
            break;
        q += ((40 + n - f) % 40);//顺（顺着排序方向）加尾（停止的位置）
        q += ((40 + m - f) % 40);//逆（逆着排序方向）加头（开始的位置）
        q += ((40 + m - l) % 40);//加的是总度数，取模也是总度数
        printf("%d\n", q * 9);
    }
    return 0;
}
