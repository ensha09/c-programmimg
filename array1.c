

#include <stdio.h>

int main()
{
    int arr[] = {3, 6, 7, 5, 9};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    float average = (float)sum / n;

    printf("Sum of the elements in the array: %d\n", sum);
    printf("Average of the elements in the array: %.2f\n", average);

    return 0;
}