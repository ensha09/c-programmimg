

#include <stdio.h>

int main()
{

    int arr[100], size, i, temp;
    printf("enter size of arry :");
    scanf("%d", &size);

    printf("enter array elements: ");
    for (int i = 0; i <= size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("array elements :");
    for (i = 0; i < size; i++)
    {
        printf("%d", &arr[i]);
    }
    return 0;
}