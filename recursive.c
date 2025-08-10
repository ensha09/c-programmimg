#include <stdio.h>
void printhelloworld(int count);
int main()
{
    printhelloworld(5);
    return 0;
}
void printhelloworld(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("hello world");
    printhelloworld(count - 1);
}
