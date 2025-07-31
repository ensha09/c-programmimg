#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main()
{
    float radius;
    printf("enter radius : ");
    scanf("%f", &radius);
    // calculating the area of circle
    printf("area = %f\n ", PI * radius * radius);
    // calculating the circumference of circle
    printf("circumference = %f\n ", 2 * PI * radius);
    return 0;
}