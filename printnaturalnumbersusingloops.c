#include <stdio.h>
int main()
{
    // by for loop
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf(" %d ", i);
    }
    return 0;
}

// by while loop
int main()
{
    int n, i = 1;
    printf("enter number:");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d ", i);
        ++i;
    }
    return 0;
}
// by do whileloop
int main()
{
    int n, i = 1;
    printf("enter number:");
    scanf("%d", &n);
    do
    {
        printf("%d ", i);
        ++i;
    } while (i <= n);
    return 0;
}