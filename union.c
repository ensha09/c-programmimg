#include <stdio.h>
union stu
{
    int a;
    char b;
};

int main()
{
    union stu s;
    s.a = 65;
    printf("%c", s.b);

    return 0;
    // in strut it will print  garbage value
}