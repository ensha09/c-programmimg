

#include <stdio.h>

int main()
{

    int arr[100], size, i, max;
    printf("enter size of arry :");
    scanf("%d", &size);

    printf("enter array elements: ");
    for (int i = 0; i <= size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("maximum value of array : %d", max);
    return 0;
}