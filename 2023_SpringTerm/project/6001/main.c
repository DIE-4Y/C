#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int leapYear(int year)
{
    if(!(year % 4) && (year % 100) || !(year % 400))
        return 1;
    else
        return 0;
}

int main()
{
    freopen("6001.txt", "r", stdin);
    int year = 0, month = 1, day = 1, i = 0, days = 0;
    int monthR[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    while(scanf("%d/%d/%d", &year, &month, &day) != EOF)
    {
        days = 0;
        if(leapYear(year))
        {
            for(i = 1; i < month; i++)
            {
                days += monthR[1][i];
            }
            days += day;
        }
        else
        {
            for(i = 1; i < month; i++)
            {
                days += monthR[0][i];
            }
            days += day;
        }
        printf("%d\n", days);
    }
    return 0;
}
