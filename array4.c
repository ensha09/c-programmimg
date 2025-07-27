
#include <stdio.h>

int main()
{
    int arr[] = {3, 5, 2, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element, index = -1;

    printf("Enter the element to search: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        printf("Element found at index: %d\n", index);
    }
    else
    {
        printf("Element not found in the array\n");
    }

    return 0;
}
