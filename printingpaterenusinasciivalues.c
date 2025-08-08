#include <stdio.h>
int main()
{

    char i, j, count = 65;

    for (i = 65; i <= 67; i++)
    {
        for (j = 65; j <= i; j++)

        {

            printf("%c", count);
            ++count;
        }
        printf("\n");
    }

    return 0;
}