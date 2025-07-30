// write a program to calculate bmi with all conditions 

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
    if (bmi < 18.5)
    {
        printf("underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("normal weight\n");
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        printf("overweight\n");
    }
    else
    {
        printf("obese\n");
    }
    return 0;
}