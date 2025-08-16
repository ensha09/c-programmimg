#include <stdio.h>
int main()
{
    int x, y;
    printf("enter x ");
    scanf("%d", &x);
    printf("enter y ");
    scanf("%d", &y);
    // before swapping
    printf("before swapping:x=%d, y=%d\n ", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    // after swapping
    printf("after swapping: x=%d ,y=%d\n", x, y);

    return 0;
}