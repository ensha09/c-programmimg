#include <stdio.h>
int main()
{
    int cp;
    int sp;
    printf("enter cost price:");
    scanf("%d", &cp);
    printf("enter selling price:");
    scanf("%d", &sp);
    if (sp > cp)
    {
        printf("profit\n");
    }
    if (cp > sp)
    {
        printf("loss\n");
    }

    if (sp == cp)
    {
        printf("nor profit neither loss ");
    }
    return 0;
}