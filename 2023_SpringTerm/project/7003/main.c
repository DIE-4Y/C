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
        q += ((40 + n - f) % 40);//˳��˳�������򣩼�β��ֹͣ��λ�ã�
        q += ((40 + m - f) % 40);//�棨���������򣩼�ͷ����ʼ��λ�ã�
        q += ((40 + m - l) % 40);//�ӵ����ܶ�����ȡģҲ���ܶ���
        printf("%d\n", q * 9);
    }
    return 0;
}
