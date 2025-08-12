#include <stdio.h>

char *mystrcat(char *dest, const char *src)
{
    int i = 0, j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

int main()
{
    char str1[30] = "Hello, ";
    char str2[] = "World!";
    mystrcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
