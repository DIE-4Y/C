#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 11

int main()
{
    freopen("9002.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--)      //�жϴ�ѭ���ڼ���
    {
        int b;
        while(scanf("%d ", &b) != EOF)      //�ж��Ƿ��ж����Խ�����һ��ѭ��
        {
            if(!b)              //���ڸ��Ľ���Ϊ2~10���Ϊ0��һ���ѭ������
                continue;
            int i, len, bcs = 0, sz[MAX] = {0}, ys = 0;
            char num[MAX] = {"\0"};
            scanf("%s", num);
            len = strlen(num);
            for(i = 0; i < len; i++)//�����޷�ֱ�Ӷ��뵽�����ִ�����Ҫ�����ַ�������
            {
                sz[i] = num[i] - '0';//�ٽ��ַ������д�����뵽����������
                bcs += sz[i];
            }
            for(i = 0; i < len; i++)//��һλ���ֽ���ȡģ
            {
                ys += sz[i];
                if(ys >= bcs)       //�����һλ���ȳ�����Ϳ���ֱ�ӽ���ȡģ����
                {
                    ys = (ys % bcs);//�����һλ�����ȳ��������ȡģ��õ���Ӧ�Ǳ������Բ��ô���
                }
                ys = ys*b;          //����ȡģ�õ������ֳ���λȨ�ټ�����һλ
            }                       //ѭ���������ϲ���
            if(!ys)                 //�жϲ��ҽ������
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}
