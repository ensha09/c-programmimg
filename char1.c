#include <stdio.h>
int main()
{
    char char1, char2, char3, char4, char5;
    printf("enter char1\n");
    scanf(" %c", &char1);
    printf("enter char2\n");
    scanf(" %c", &char2);
    printf("enter char3\n");
    scanf(" %c", &char3);
    printf("enter char4\n");
    scanf(" %c", &char4);
    printf("enter char5\n");
    scanf(" %c", &char5);
    // calculating the reversed order of char1,char2,char3,char4,char5 ;
    printf("reversed order:%c %c %c %c %c\n ", char5, char4, char3, char2, char1);

    return 0;
}
