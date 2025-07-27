
#include <stdio.h>

int main()
{
    int arr[] = {10, 5, 8, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int firstMax, secondMax;

    if (arr[0] > arr[1])
    {
        firstMax = arr[0];
        secondMax = arr[1];
    }
    else
    {
        firstMax = arr[1];
        secondMax = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > firstMax)
        {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != firstMax)
        {
            secondMax = arr[i];
        }
    }

    printf("The second largest element is: %d", secondMax);

    return 0;
}
