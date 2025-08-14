#include <stdio.h>
int main()

{
    int n, a, b, f = 1, i, ch;
    printf("enter user choice");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("enter any number ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("%d", i);
        }
        break;

    case 2:
        printf("enter two numbers");
        scanf("%d %d", &a, &b);
        n = a + b;
        printf("sum=%d", n);
        break;
    case 3:
        printf("enter any number");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        printf("factorial=%d", f);
        break;
    default:
        printf("invalid user choice");
    }
    return 0;
}
