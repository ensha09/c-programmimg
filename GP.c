#include <stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    int a = 1;
    // to print gp like:1 2 4 8 16 32..
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 2;
    }
    return 0;
}