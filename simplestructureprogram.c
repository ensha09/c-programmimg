#include <stdio.h>
#include <string.h>
struct employ
{
    int eid;
    char ename[20];
    float esalary;
};

int main()
{
    struct employ e;
    e.eid = 10;
    strcpy(e.ename, "mumtaz");
    e.esalary = 1000.30;
    printf("employ ID:%d\n", e.eid);
    printf("employ NAME:%s\n", e.ename);
    printf("employ SAL:%f\n", e.esalary);

    return 0;
}