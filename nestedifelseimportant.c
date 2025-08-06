#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter number:");
    scanf("%d", &a);
    printf("enter number:");
    scanf("%d", &b);

    printf("enter number:");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
            printf("the greatest number is;%d", a);
        else
            printf("the greatest number is :%d", c);
    }
    else
    {
        if (b > c)
            printf("the greatest number is :%d", b);
        else
            printf("the greatest number is :%d", c);
    }
    return 0;
}