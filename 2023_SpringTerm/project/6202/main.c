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
        if(leapYear(preyear))   //对是否是闰年进行判断
        {                       //对月份含有的天数进行相加
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
        days += (preday - 1);       //因为默认day有1月1日这一天
        year += days / 1000;        //所以必须在days上减一天以保证日期的准确
        days %= 1000;               //month也默认有1月
        month += days /100;
        days %= 100;
        day += days;
        second = (prehour * 3600 + preminute * 60 + presecond) * 100000LL / (3600 * 24);// 他的一天和我们的一天时长相同，但每秒表示的时间不同，LL必须加上，
        hour = second / 10000;      //因为一天的时间是从0开始
        second %= 10000;            //所以与上边的不同不用减一
        minute = second / 100;
        second %= 100;
        printf("%ld:%ld:%ld %ld.%ld.%ld\n", hour, minute, second, day, month, year);
    }
    return 0;
}
