#include <stdio.h>
//��������������������0Χ�ɵľ�����

int main()
{
    int n, i, j, count = 0;
    freopen("3113.txt", "r", stdin);
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&a[j]);
        }
        int flag = 0;
        for(j = 0; j < n; j++)
        {
            if((a[j-1] == 255) && (a[j] == 0) && (a[j+1] == 255))
            {
                if(!flag)
                    flag = 1;
                else
                    flag = 0;
            }
            if(flag == 1 && (a[j] == 255))
                count++;
        }
    }

    printf("%d", count);
    return 0;
}
