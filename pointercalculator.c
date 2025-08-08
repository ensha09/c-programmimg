#include <stdio.h>
int main()
{
    int a, b, *p, *q;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    p = &a;
    q = &b;
    // //printf("%d\n", a);
    // printf("%d\n", &a);
    // printf("%d\n", p);
    // printf("%d\n", *p);
    // printf("%d\n", &p);
    // printf("%d\n", q);
    // printf("%d\n", *q);
    //  printf("%d\n", **q);
    //   printf("%d\n", &q);
    int r = *p + *q;
    printf("sum of numbers:%d\n", r);
    int m = *p * *q;
    printf("multiplication is:%d\n", m);
    int s = *p - *q;
    printf("subtraction is:%d\n", s);
    int d = *p / *q;
    printf("division  is:%d\n", d);

    return 0;
}