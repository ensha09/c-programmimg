#include <stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    // ***************....upto N no of stars
    for (int i = 1; i <= n; i++) // outerloop-> no of lines
    {
        for (int j = 1; j <= n; j++) // inner loop->no of stars in eachline

        {

            printf("*");
        }
        printf("\n"); // har line kay baad ek enter maarne ke liye hai
    }
}