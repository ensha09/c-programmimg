#include <stdio.h>
int main()
{
    char ch = 'a';
    //  printf("%d", z);
    // while (z < 126)
    // {
    //     printf("%c", ++z);
    // }

    for (char i = '!'; i <= '~'; i++)
    {
        printf("%c = %d\t", i, i);
    }
    return 0;
}