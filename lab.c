// program to print the maximum and minimum element of an array
#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("maximum element is %d\n", max);
    printf("minimum element is %d\n", min);
    return 0;
}
//program to print the sum of digits of a given podsitive number
 #include <stdio.h>
    int main()
    {
        int num, sum = 0;
        printf("enter a positive number : ");
        scanf("%d", &num);
        while (num > 0)
        {
            sum += num % 10;
            num = num / 10;
        }
        printf("sum of digits is %d\n", sum);
        return 0;
    }