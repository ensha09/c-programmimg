
#include <stdio.h>

int main()
{
    int arr[] = {10, 5, 8, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int insertNum = 25;
    int insertPos = 2;
    int i;

    printf("Original Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Shift elements to the right to make space for the new element
    for (i = n - 1; i >= insertPos; i--)
    {
        arr[i + 1] = arr[i];
    }

        arr[insertPos] = insertNum;

    printf("\nArray after insertion: ");
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
