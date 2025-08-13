// write a c program to convert degree celsius to fahrenheit using function

#include <stdio.h>
float convert(float celsius);
int main()
{
    float celsius, fahrenheit;
    printf("enter temperature in celsius :");
    scanf("%f", &celsius);
    fahrenheit = convert(celsius);
    printf("temperature in fahrenheit is %f", fahrenheit);
    return 0;
}
float convert(float celsius)
{
    float fahrenheit;
    fahrenheit = (1.8 * celsius) + 32;
    return fahrenheit;
}