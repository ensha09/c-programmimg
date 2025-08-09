#include <stdio.h>

int mystrcmp(const char *str1, const char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

int main()
{
    char str1[] = "HELLO";
    char str2[] = "Hello";
    int result = mystrcmp(str1, str2);
    printf("Comparison result: %d\n", result);
    return 0;
}
