#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, num5;
    printf("enter num1:");
    scanf("%d\n", &num1);
    printf("enter num2:");
    scanf("%d\n", &num2);
    printf("enter num3:");
    scanf("%d\n", &num3);
    printf("enter num4:");
    scanf("%d\n", &num4);
    printf("enter num5:");
    scanf("%d\n", &num5);
    float sum = num1 + num2 + num3 + num4 + num5;
    printf("sum is: %f\n", sum);
    float avg = sum / 5.0;
    // calculating the average of num1,num2,num3,num4,num5
    printf("average is: %f\n", avg);
    return 0;
}