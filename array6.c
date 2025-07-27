
#include <stdio.h>

int main()
{
    int arr[] = {10, 5, 8, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int deleteNum = 8;
    int i, j;

    printf("Original Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

        for (i = 0; i < n; i++)
    {
        if (arr[i] == deleteNum)
        {
            for (j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            break;
        }
    }

    n--; // Reduce the size of the array

    printf("\nArray after deletion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
