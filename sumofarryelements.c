

#include <stdio.h>

int main()
{

    int arr[5];
    int sum = 0;
    printf("enter array elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("sum of array elements: ");

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);

    return 0;
}