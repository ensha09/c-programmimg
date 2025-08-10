#include <stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    int sum = 0;
    int r;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("the sum of digits is: %d", sum);
    return 0;
}
