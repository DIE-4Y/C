#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 101

int main()
{
    freopen("9003.txt", "r", stdin);
    char num1[MAX] = {"\0"}, num2[MAX] = {"\0"};
    int result[MAX] = {0};
    while(scanf("%s %s", num1, num2) != EOF)    //�����ж������ݶ�ȡ��Ҫ��EOF�ж�
    {                                           //����̫���Һ�����ĸ�������ַ�������
        int i, len1 = strlen(num1), len2 = strlen(num2), jw = 0;
        for(i = 0, len1--, len2--; len1 >= 0 && len2 >= 0; len1--, len2--, i++)
        {                                               //�������ַ������д������̵ı�������Ϊֹ
            int ret = 0;
            if(num1[len1] >= '0' && num1[len1] <= '9')  //�ж�ÿһλ��0~9����a~j
                ret += num1[len1] - '0';                //����Ӧ�Ĵ�С�ӵ�ret��
            else
                ret += num1[len1] - 'a' + 10;
            if(num2[len2] >= '0' && num2[len2] <= '9')
                ret += num2[len2] - '0';
            else
                ret += num2[len2] - 'a' + 10;
            ret += jw;                                  //retÿ�ζ�������Ͻ�λ���ⲽ�ܹؼ�������
            if(ret >= 20)                               //�Ƚ�ret�Ƿ��н�λ
            {                                           //���Խ�λ���и�ֵ�������ʹ��
                jw = 1;
            }
            else
            {
                jw = 0;
            }
            result[i] = ret % 20;                       //�����ȡģ�ӵ��������������
        }                                               //�����жԽ�λ�Ĳ���ȡģ֮��õ��ľ�����һλ����ȷֵ
        if(len1 >= 0)                                   //�Գ���δ������Ľ��д���
        {
            for(; len1 >= 0; len1--, i++)               //��ӷ���ͬ�ϵ���������һ�����������˲��ü�������һ������
            {
                int ret = 0;
                if(num1[len1] >= '0' && num1[len1] <= '9')
                    ret += num1[len1] - '0';
                else
                    ret += num1[len1] - 'a' + 10;
                ret += jw;
                if(ret >= 20)
                {
                    jw = 1;
                }
                else
                {
                    jw = 0;
                }
                result[i] = ret % 20;
            }
        }
        else if(len2 >= 0)
        {
            int ret = 0;
                if(num2[len2] >= '0' && num2[len2] <= '9')
                    ret += num2[len2] - '0';
                else
                    ret += num2[len2] - 'a' + 10;
                ret += jw;
                if(ret >= 20)
                {
                    jw = 1;
                }
                else
                {
                    jw = 0;
                }
                result[i] = ret % 20;
        }
        if(jw)                  //�������н�λ��ർ�����λ֮ǰ�����һ
        {                       //����ֱ�����1
            printf("1");
        }                       //�������λǰû�в��ý��д���
        for(i--; i>= 0; i--)    //���𽫴洢�Ľ������ע�����9��Ҫ���ַ����
        {                       //���Ҫ����
            if(result[i] <= 9)
                printf("%d", result[i]);
            else
                printf("%c", result[i] + 'a' - 10);
        }
        printf("\n");
    }
    return 0;
}
