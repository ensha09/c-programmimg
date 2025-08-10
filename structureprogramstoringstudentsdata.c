#include <stdio.h>
#include <string.h>
struct stu
{
    int sroll;
    char sname[20];
    int marks[5];
};

int main()
{
    struct stu s;

    int total = 0;
    float avg;

    printf("enter sroll:");
    scanf("%d", &s.sroll);
    printf("enter sname:");
    scanf("%s", &s.sname);

    printf("enter 5 subject smarks:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &s.marks[i]);
        total = total + s.marks[i];
        avg = (float)total / 5;
    }
    printf("students roll no:%d\n", s.sroll);
    printf("students name:%s\n", s.sname);
    printf("students total marks:%d\n", total);
    printf("students avg marks:%f\n", avg);

    return 0;
}