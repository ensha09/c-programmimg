#include <stdio.h>
int main()
{
    int num1;
    int num2;
    printf(" enter num1 ");
    scanf("%d", &num1);
    printf(" enter num2 ");
    scanf("%d", &num2);
    int sum = num1 + num2;
    // calculating sum of two numbers
    printf(" sum is : %d\n ", sum);
    int difference = num1 - num2;
    // calculating difference of two numbers
    printf("difference is: %d\n", difference);
    int product = num1 * num2;
    // calculating product of two numbers
    printf("product is: %d\n", product);
    float quotient = num1 / num2;
    // calculating quotient of two numbers
    printf("quotient is: %f\n", quotient);
    float remainder = num1 % num2;
    // calculating remainder of two numbers
    printf("remainder is: %f\n", remainder);
    return 0;
}