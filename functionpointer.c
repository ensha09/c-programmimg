#include <stdio.h>
int add()
{
    int a, b;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);

    return a + b;
}
int main()
{
    int (*p)(), c;
    p = add;
    c = p();
    printf("sum of two numbers :%d", c);
    return 0;
}