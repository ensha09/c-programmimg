#include <stdio.h>
int main()
{
    int sp;
    int cp;
    printf("enter selling price:");
    scanf("%d", &sp);
    printf("enter cost price:");
    scanf("%d", &cp);
    if (sp > cp)
    {
        printf("profit");
    }
    else if (sp < cp)
    {
        printf("loss");
    }
    else
    {
        printf("nor loss neither profit");
    }
    return 0;
}