#include <stdio.h>

//�ж����ֽ���



int main()
{
    int i, n;
    freopen("3207.txt", "r", stdin);
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if((a == b)||(a == b + 2))//a,bֻ����Ȼ����2
        {                         //���򲻴���
            if(a % 2 == 0)
                printf("%d\n",a + b);//x��ż�����Ǿͺ����������
            else
                printf("%d\n",a + b - 1);//x��������ʱ������������ټ�1
        }
        else
            printf("No Number\n");
    }
    return 0;
}
