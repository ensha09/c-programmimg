#include <stdio.h>

void mystrrev(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main()
{
    char str[] = "IITBIIIT";
    mystrrev(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
