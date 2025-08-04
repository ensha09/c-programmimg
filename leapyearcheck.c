#include <stdio.h>
int main()
{
    // conditions for leaf year
    // 1) 1200 1600 2000 24090 etc
    // 2) 2012 2016 2020 ......2096 and
    // 3) 2100 2200 2w300 2500
    int y;
    printf("enter any year:");
    scanf("%d", &y);
    if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
    {
        printf("the year is leap year");
    }
    else
    {
        printf("the year is not a leap year");
    }
    return 0;
}