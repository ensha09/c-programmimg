#include <stdio.h>

int mystrlen(const char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char str[] = "GATE, 2024!";
    printf("Length of the string: %d\n", mystrlen(str));
    return 0;
}
