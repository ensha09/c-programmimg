#include <stdio.h>
int main()
{
    int num1;
    printf("enter num1");
    scanf("%d", &num1);
    printf("%d", (num1 > 9) && (num1 < 100));
    return 0;
}