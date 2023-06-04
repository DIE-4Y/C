#include <stdio.h>
//输出每行两两相加前m个最大的最大的

int main()
{
    int n, m;//下一行读入n个，输出前m个最大的
    freopen("3008.txt", "r", stdin);
    while(scanf("%d %d", &n, &m) != EOF)
    {
        int i, j;
        int arr[3005] = {0};
        for(i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n - i; j++)
            {
                if(arr[j] < arr[j + 1])
                {
                    int t = arr[j]; arr[j] = arr[j+1]; arr[j + 1] = t;
                }
            }
        }
        while(1)
        {
            int flag = 0;
            for(i = 0; i < n; i++)
            {
                for(j = i+1; j < n; j++)
                {
                    printf("%d ", arr[i] + arr[j]);
                    flag++;
                    if(flag == m)
                        break;
                }
                if(flag == m)
                    break;
            }
            if(flag == m)
                break;
        }
        printf("\n");
    }
    return 0;
}
