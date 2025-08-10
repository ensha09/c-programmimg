#include <stdio.h>

char *mystrcpy(char *dest, const char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main()
{
    char source[] = "GATECSE";
    char destination[20];
    mystrcpy(destination, source);
    printf("string after copying: %s\n", destination);
    return 0;
}
