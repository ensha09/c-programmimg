

#include <stdio.h>

int main()
{

    int arr[5];

    printf("enter array elements: ");
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("reversed array elements : ");

    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}