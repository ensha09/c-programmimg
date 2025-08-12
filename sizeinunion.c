#include <stdio.h>
union person
{
    int age;
    double sal;
};

int main()
{
    printf("union size:%d bytes", sizeof(union person));
    return 0;
}