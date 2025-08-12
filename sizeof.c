// size of int , char and float types;
#include <stdio.h>

int main()
{

    printf("Size of signed int: %d bytes\n", sizeof(int));
    printf("Size of unsigned int: %d bytes\n", sizeof(unsigned int));

    printf("Size of signed short int: %d bytes\n", sizeof(short int));
    printf("Size of unsigned short int: %d bytes\n", sizeof(unsigned short int));

    printf("Size of signed long int: %d bytes\n", sizeof(long int));
    printf("Size of unsigned long int: %d bytes\n", sizeof(unsigned long int));

    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));

    printf("Size of signed char: %zu bytes\n", sizeof(char));
    printf("Size of unsigned char: %zu bytes\n", sizeof(unsigned char));

    return 0;
}