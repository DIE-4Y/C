//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//
//int leapYear(int year)
//{
//    if((year % 4 == 0 && (year % 100 ) != 0) || (year % 400 == 0))
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    freopen("6004.txt", "r", stdin);
//    int n;
//    scanf("%d", &n);
//    while(n--)
//    {
//        int flag = 0;
//        int startyear = 0, endyear = 0, month = 0, day = 0, days = 0;
//        int month1[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//        int month2[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//        scanf("%d-%d-%d", &startyear, &month, &day);
//        if(month == 2 && day == 29)     //若18年前是闰年18年后一定不会是闰年
//            printf("-1\n");             //若出生在18年前的2月29则18年后不会有这一天
//        else
//        {
//            endyear = startyear + 18;
//            if(leapYear(startyear))     //将出生年与18岁的年相加
//            {                           //如果18年前是闰年而且月份在1，2月之内就加上366
//                if(month <= 2)
//                    days += 366;
//                else
//                    days += 365;
//            }
//            else if(leapYear(endyear))
//            {
//                if(month >= 2)
//                    days += 366;
//                else
//                    days += 365;
//            }
//            else
//                days += 365;
//            for(startyear++; startyear < endyear; startyear++)
//            {
//                if(leapYear(startyear))
//                    days += 366;
//                else
//                    days += 365;
//            }
//            printf("%d\n", days);
//        }
//    }
//    return 0;
//}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int leap_year(int year)
{
    if((!(year % 4) && (year % 100)) || !(year % 400))
        return 1;
    else
        return 0;
}

int main()
{
    freopen("6004.txt", "r", stdin);
    int startyear ,endyear ,month, day, days, n;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d-%d-%d", &startyear , &month, &day);
        days = 365 * 18;
        if(month == 2 && day == 28)
        {
            printf("-1\n");
            continue;
        }
        endyear = startyear + 18;
        if(leap_year(startyear))
        {
            if(month <= 2)
                days++;
        }
        else if(leap_year(endyear))
        {
            if(month >= 3)
                days++;
        }
        for(startyear++; startyear < endyear; startyear++)
        {
            if(leap_year(startyear))
                days++;
        }
        printf("%d\n", days);
    }
    return 0;
}

