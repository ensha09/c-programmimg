#include <stdio.h>
int main()
{
    float weight, height, bmi;
    printf("enter weight in kilogram\t");
    scanf("%f", &weight);
    printf("enter height in meters\t");
    scanf("%f", &height);
    // calculating body mass index
    bmi = weight / (height * height);
    printf("BMI :%f\n", bmi);
    return 0;
}