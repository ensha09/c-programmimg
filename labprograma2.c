#include <stdio.h>

int main() {
    int n, i = 3, count, c;

    printf("Enter the number of prime numbers required: ");
    scanf("%d", &n);

    if (n >= 1) {
        printf("First %d prime numbers are: \n", n);
        printf("2 ");
    }

    for (count = 2; count <= n; i++) {
        for (c = 2; c < i; c++) {
            if (i % c == 0)
                break;
        }
        if (c == i) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n");
    return 0;
}
#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}
program to reverse a string witout using function
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("enter a string\n");
    gets(str);
    int len = strlen(str);
    printf("reverse of the string is : ");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}