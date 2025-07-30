//write a program to swap two numbers using call by reference

#include <stdio.h>
void swap(int *x, int *y);
int main()
{
    int x, y;
    printf("enter x ");
    scanf("%d", &x);
    printf("enter y ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("x=%d y=%d", x, y);
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("x=%d y=%d", *x, *y);
}