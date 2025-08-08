#include <stdio.h>
#include <stdlib.h>
int isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 0;
}
int main()
{
    int n1, n2, i, j;
    printf("enter first number\n");
    scanf("%d", &n1);
    printf("enter second number\n");
    scanf("%d", &n2);
    printf("the prime numbers between %d and %d are : ", n1, n2);
    for (int i = n1; i <= n2; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("%d ", j);
    }
    return 0;
}
