

#include <stdio.h>

int main()
{

    int a1[5], a2[5];

    printf("enter array elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d ", &a1[i]);
    }
    printf("first array elements:\n ");

    for (int i = 0; i < 5; i++)
    {

        printf("%d ", a1[i]);
    }
    printf("\ncoping array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        a2[i] = a1[i];
    }
    printf("second arrayelements:\n ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a2[i]);
    }
    return 0;
}