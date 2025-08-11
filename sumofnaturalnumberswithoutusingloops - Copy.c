#include <stdio.h>
#include <string.h>
int main()
{
    int n, s;
    printf("enter number:");
    scanf("%d", &n);
    s = n * (n + 1) / 2;

    printf("sum is:%d", s);

    return 0;
}