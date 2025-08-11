#include <stdio.h>
struct stu
{
    int a;
    char b;
    float c;
};

int main()
{
    struct stu s;
    s.b = 65;
    printf("%c", s.b);

    return 0;
}