#include <stdio.h>
int main()
{
    int i;
    printf("%d", i);
    while (i <= 100)
    {
        printf("%d ", i);
        i = i++;
    }

    return 0;
}