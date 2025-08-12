#include <stdio.h>
int main()
{
    int a, b, *p, *q;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    p = &a;
    q = &b;
    printf("before swapping :%d %d\n", a, b);
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("after swapping :%d %d", *p, *q);
    return 0;
}