#include <stdio.h>
union person
{
    int age;

    double sal;
};

int main()
{
    union person p;

    p.age = 12;

    printf("persons age:%d\n", p.age);
    p.sal = 50000.454;

    printf("persons salary:%lf", p.sal);

    return 0;
}