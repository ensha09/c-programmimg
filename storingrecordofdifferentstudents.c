#include <stdio.h>
#include <string.h>
struct stu
{
    int roll;
    char name[20];
    float marks;
} s[100];

int main()
{
    int n;

    printf("enter no. of students:");
    scanf("%d", &n);
    printf("enter students record\n\n");
    // struct stu s[5];
    for (int i = 0; i < n; i++)
    {

        printf("enter sroll:");
        scanf("%d", &s[i].roll);
        printf("enter sname:");
        scanf("%s", &s[i].name);

        printf("enter smarks:");
        scanf("%f", &s[i].marks);
    }

    printf("students record\n\n");
    for (int i = 0; i < n; i++)
    {

        printf("students roll no:%d\n", s[i].roll);
        printf("students name:%s\n", s[i].name);
        printf("students marks:%f\n\n", s[i].marks);
    }
    return 0;
}