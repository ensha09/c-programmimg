#include <stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    int a = 100;
    // to print 100 97 94 ....
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a - 3;
    }
    return 0;
}
// OR WE CAN WRITE IT AS
// int a=100;
// for(int i=1;a>0;i++){
// printf("%d ",a);
// a=a-3;
//}