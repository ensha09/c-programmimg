#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "mumtaz", str2[10];
    // copy one string into another string
    strcpy(str2, str1);
    printf("%s", str2);

    return 0;
}