#include <stdio.h>
//���ÿ���������ǰm����������

int main()
{
    int n, m;//��һ�ж���n�������ǰm������
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
