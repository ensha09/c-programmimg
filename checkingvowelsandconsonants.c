#include <stdio.h>
int main()
{
    char ch;
    printf("enter any character:");
    scanf("%d", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("character is a vowel");
    }
    else
    {
        printf("character is consonant");
    }
    return 0;
}