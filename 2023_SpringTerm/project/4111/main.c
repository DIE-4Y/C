#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//����n����������Ҫ�����n���������������к��������Ҫ��ÿ����������С������ͬһ��


int main()
{
    freopen("4111.txt", "r", stdin);
    int i = 0, j, n, max = 0;
    char str[10001][51] = {{"\0"}};//��С��������洢
    int num[10001] = {0};
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        for(j = 0; j < strlen(str[i]); j++)
        {
            if(str[i][j] == '.')
            {
                num[i] = j;//ȷ��ÿһ������С����λ��
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
            printf(" ");//��������λ������
        printf("%s\n",str[i]);
    }
    return 0;
}
