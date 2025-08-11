#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("enter temperature in celsius :");
    scanf("%f", &celsius);
    fahrenheit = (1.8 * celsius) + 32;
}