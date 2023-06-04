#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int leapYear(int year)
{
    if((year % 4 == 0 && (year % 100 ) != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    freopen("6202.txt", "r", stdin);
    int prehour = 0, preminute = 0, presecond = 0, preday = 0, premonth = 0, preyear = 0;
    long long hour = 0, minute = 0, second = 0, day = 1, month = 1, year = 0;
    int month1[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month2[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n;
    scanf("%d", &n);
    while(n--)
    {
        hour = 0, minute = 0, second = 0, day = 1, month = 1, year = 0;
        scanf("%d:%d:%d %d.%d.%d", &prehour, &preminute, &presecond, &preday, &premonth, &preyear);
        long long days = 0, i;
        for(i = 2000; i < preyear; i++)
        {
            if(leapYear(i))
                days += 366;
            else
                days += 365;
        }
        if(leapYear(preyear))   //���Ƿ�����������ж�
        {                       //���·ݺ��е������������
            for(i = 0; i < 12; i++)
            {
                if(premonth == i + 1)
                    break;
                days += month2[i];
            }
        }
        else
        {
            for(i = 0; i < 12; i++)
            {
                if(premonth == i + 1)
                    break;
                days += month1[i];
            }
        }
        days += (preday - 1);       //��ΪĬ��day��1��1����һ��
        year += days / 1000;        //���Ա�����days�ϼ�һ���Ա�֤���ڵ�׼ȷ
        days %= 1000;               //monthҲĬ����1��
        month += days /100;
        days %= 100;
        day += days;
        second = (prehour * 3600 + preminute * 60 + presecond) * 100000LL / (3600 * 24);// ����һ������ǵ�һ��ʱ����ͬ����ÿ���ʾ��ʱ�䲻ͬ��LL������ϣ�
        hour = second / 10000;      //��Ϊһ���ʱ���Ǵ�0��ʼ
        second %= 10000;            //�������ϱߵĲ�ͬ���ü�һ
        minute = second / 100;
        second %= 100;
        printf("%ld:%ld:%ld %ld.%ld.%ld\n", hour, minute, second, day, month, year);
    }
    return 0;
}
