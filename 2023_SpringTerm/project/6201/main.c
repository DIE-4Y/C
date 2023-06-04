#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int leapYear(int year)
{
    if((year % 4 == 0 && (year % 100 ) != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    freopen("6201.txt", "r", stdin);
    while(1)
    {
        int n, i, flag = 0;
        scanf("%d" , &n);
        if(n == -1)
            break;
        int year = 2000, month = 1, yearR[2] = {365, 366};
        char week[10] = {"\0"};
        int month1[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
         int month2[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        char DayOfWeek[7][10] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday","Thursday", "Friday"};
        strcpy(week, DayOfWeek[n % 7]); //直接判断星期几
        for (year = 2000; n >= yearR[leapYear(year)]; year++)
        {
			n -= yearR[leapYear(year)];
		}
        if(leapYear(year))  //判断确定下来的一年是不是闰年，以确定应该用什么月份
        {
            for(i = 0; i < 12; i++)
            {
                if(n <= month1[i])
                {
                    month += i;
                    break;
                }
                else
                {
                    n -= month1[i];
                }
            }
        }
        else
        {
            for(i = 0; i < 12; i++)
            {
                if(n <= month2[i])
                {
                    month += i;
                    break;
                }
                else
                {
                    n -= month2[i];
                }
            }
        }
        if(month < 10 && n < 10)
            printf("%d-0%d-0%d %s\n", year, month, n, week);
        else if(month < 10 && n >= 10)
            printf("%d-0%d-%d %s\n", year, month, n, week);
        else if(month >= 10 && n >= 10)
            printf("%d-%d-%d %s\n", year, month, n, week);
        else if(month >= 10 && n < 10)
            printf("%d-%d-0%d %s\n", year, month, n, week);
    }
    return 0;
}








/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int leapYear(int year)
{
    if((year % 4 == 0 && (year % 100 ) != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    freopen("6201.txt", "r", stdin);
    while(1)
    {
        int n, i, flag = 0;
        scanf("%d" , &n);
        if(n == -1)
            break;
        int year = 2000, month = 0;
        char week[10] = {"\0"};
        int month1[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int month2[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        char DayOfWeek[7][10] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday","Thursday", "Friday"};
        strcpy(week, DayOfWeek[n % 7]); //直接判断星期几
        while(n > 0)           //判断是不是闰年，并且先判断天数够不够这一年
        {
            if(leapYear(year))
            {
                if(n - 366 <= 0)
                    break;
                else
                    n -= 366;
            }
            else
            {
                if(n - 365 <= 0)
                    break;
                else
                    n -= 365;
            }
            year += 1;
        }
        if(leapYear(year))  //判断确定下来的一年是不是闰年，以确定应该用什么月份
        {
            for(i = 0; i < 12; i++)
            {
                if((n - month1[i]) <= 0)
                {
                    month = i + 1;
                    break;
                }
                else
                {
                    n -= month1[i];
                }
            }
        }
        else
        {
            for(i = 0; i < 12; i++)
            {
                if((n - month2[i]) <= 0)
                {
                    month = i + 1;
                    break;
                }
                n -= month2[i];
            }
        }
        if(month < 10 && n < 10)
            printf("%d-0%d-0%d %s\n", year, month, n, week);
        else if(month < 10 && n >= 10)
            printf("%d-0%d-%d %s\n", year, month, n, week);
        else if(month >= 10 && n >= 10)
            printf("%d-%d-%d %s\n", year, month, n, week);
        else if(month >= 10 && n < 10)
            printf("%d-%d-0%d %s\n", year, month, n, week);
    }
    return 0;
}
*/
