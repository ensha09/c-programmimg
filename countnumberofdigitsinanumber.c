#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("enter number:");
    scanf("%d", &n);
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    printf("total %d digits ", count);
    return 0;
}