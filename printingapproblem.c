#include <stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    for (int i = 4; i <= 3 * n + 1; i = i + 3)
    {

        printf("%d\n", i);
    }
    return 0;
} // display this ap : 4,7,10,13,16...upto n terms.in this we have to use mats to find common difference nand last term