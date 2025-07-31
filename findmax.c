#include <stdio.h>

int findMax(int arr[], int size)
{
    int max = arr[0]; // Initialize max with the first element
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int myArray[] = {10, 25, 7, 42, 18};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Call the findMax function
    int maximumElement = findMax(myArray, arraySize);

    printf("Maximum element in the array: %d\n", maximumElement);
    return 0;
}
