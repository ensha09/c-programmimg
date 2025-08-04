#include <stdio.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main()
{
    float side = 5;
    float a = 5.0;
    float b = 10.0;
    printf("area is : %f", squareArea(side * side));
    return 0;
}
float squareArea(float side)
{
    return side * side;
}
float circleArea(float radius)
{
    return 3.14 * radius * radius;
}
float rectangleArea(float a, float b)
{
    return a * b;
}