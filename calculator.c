//write a calculator program  using switch case without pointers
#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("enter the operator:");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("sum of numbers:%d\n", a + b);
        break;
    case '-':
        printf("subtraction of numbers:%d\n", a - b);
        break;
    case '*':
        printf("multiplication of numbers:%d\n", a * b);
        break;
    case '/':
        printf("division of numbers:%d\n", a / b);
        break;
    default:
        printf("invalid operator\n");
        break;
    }
    return 0;
}