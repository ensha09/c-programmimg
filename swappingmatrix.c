

#include <stdio.h>

int main()
{

    int a[2][2], b[2][2], temp[2][2];
    printf("enter value of first matrix : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter value of second matrix : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf(" before swapping:\n ");
    printf("first matrix :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", &a[i][j]);
        }
        printf("\n");
    }
    printf("second matrix:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d ", &b[i][j]);
        }
        printf("\n");
    }
    printf("swapping matrix :\n ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            temp[i][j] = a[i][j];
            a[i][j] = b[i][j];
            b[i][j] = temp[i][j];
        }
    }
    printf("after swapping:\n");
    printf("first matrix:\n ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", &a[i][j]);
        }
        printf("\n");
    }
    printf("second matrix:\n ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", &b[i][j]);
        }
        printf("\n");
    }
    return 0;
}