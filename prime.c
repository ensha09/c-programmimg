
//finding whether a number is prime or not
#include <stdio.h>
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
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    if (isprime(n))
    {
        printf("the number is prime\n");
    }
    else
    {
        printf("the number is not prime\n");
    }
    return 0;
}
