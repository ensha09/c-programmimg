
#include <stdio.h>

int main()
{

    int arr[100], n, i, item;
    printf("enter size of arry :");
    scanf("%d", &n);

    printf("enter array elements: ");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("insert elements in array at begning");
    scanf("%d", item);
    n++;
    for (i = n; i > 1; i--)
    {
        arr[i - 1] = arr[i - 2];
        arr[0] = item;
        printf("rseultant arrray elements:");
        for (i = 0; i < n; i++)
        {
            printf("%d", arr[i]);
        }
    }
    return 0;
}