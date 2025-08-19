#include <stdio.h>
int main()
{
    int n;
    printf("entrer the number:");
    scanf("%d", &n);
    if (n >= 0)
    {
        printf("the number is a positive nuumber");
    }
    if (n <= 0)
    {
        printf("the number is negative");
    }
    return 0;
}