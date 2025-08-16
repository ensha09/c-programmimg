#include <stdio.h>
int main()
{
    // area of square
    float side;
    printf("enter side : ");
    scanf("%f", &side);
    printf("Area of square of side length %f is : %f\n", side, side * side);
    return 0;
}