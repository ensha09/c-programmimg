// #include<stdio.h>
// int calculatefactorial(int num){
//     int factorial= 1;
//     for(int i=1;i<=num;i++){
//         factorial=factorial*i;
//     }
//     return factorial;
// }
// int main(){
//     int num;
//     printf("enter number:");
//     scanf("%d",&num);
//     int factorial=calculatefactorial(num);
//     printf("the factorial of %d is:%d\n",num, factorial);
// return 0;

// }
//  Prime Number

#include <stdio.h>

int isPrime(int n);
int main()
 {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isPrime(number))
        printf("%d is a prime number\n", number);
    else
        printf("%d is not a prime number\n", number);
    
    return 0;
}

int isPrime(int n)
 {
    int i;
    
    if (n <= 1)
     {
        return 0;
    }
    
    for (i = 2; i <= n/2; i++)
     {
        if (n % i == 0)
         {
            return 0; 
        }
    }
    
    return 1; 
}