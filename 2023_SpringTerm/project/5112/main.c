#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    freopen("5112.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int a, b, c, tempa, tempb, tempc;
        scanf("%d %d %d", &a, &b, &c);
        int max = 0;
        tempa = a, tempb = b, tempc = c;
        while(tempa)                    //��max��ʾ����
        {
            if((tempa % 10) > max)     //��ֹ��һ���Ǵ������е��κ�һλ
            {
                max = tempa % 10;
            }
            tempa /= 10;
        }
        while(tempb)
        {
            if((tempb % 10) > max)
            {
                max = tempb % 10=;
            }
            tempb /= 10;
        }
        while(tempc)
        {
            if((tempc % 10) > max)
            {
                max = tempc%10;
            }
            tempc /= 10;
        }
        int flag = 0,weight;
        for(max++; max <= 16; max++)    //����֮ǰȡ�Ľ�ֹ�պõ�������һλ
        {                               //max��Ҫ++
            int suma = 0, sumb = 0, sumc = 0;
            tempa = a, tempb = b, tempc = c, weight = 1;
            while(tempa)                //�ֱ���ÿһ�����ڲ�ͬ������ʮ������ֵ
            {
                suma += (tempa % 10) * weight;
                tempa /= 10;
                weight *= max;
            }
            weight = 1;
            while(tempb)
            {
                sumb += (tempb % 10) * weight;
                tempb /= 10;
                weight *= max;
            }
            weight = 1;
            while(tempc)
            {
                sumc += (tempc % 10) * weight;
                tempc /= 10;
                weight *= max;
            }
            if(sumc == (sumb * suma))       //�����ĳһ����������Ⱦ��˳�ѭ��
            {
                flag = 1;                   //flag���ڴ�ӡʱ���жϣ�Ϊ1���У�Ϊ0��û��
                break;
            }
        }
        if(flag)
        {
            printf("%d\n", max);
        }
        else
            printf("0\n");
    }
    return 0;
}
