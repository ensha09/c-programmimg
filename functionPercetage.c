#include <stdio.h>
int calcPercentage(int science, int math, int physics);

int main()
{
    int sc = 98;
    int math = 95;
    int physics = 99;

    printf("percentage is : %d", calcPercentage(sc, math, physics));
    return 0;
}
int calcPercentage(int science, int math, int physics)
{
    return ((science + math + physics) / 3);
}