#include <stdio.h>

struct Employee
{
    char name[50];
    int id;
    char department[30];
    float salary;
};

void inputEmployee(struct Employee *emp)
{
    printf("Enter Name: ");
    scanf("%s", emp->name);
    printf("Enter ID: ");
    scanf("%d", &emp->id);
    printf("Enter Department: ");
    scanf("%s", emp->department);
    printf("Enter Salary: ");
    scanf("%f", &emp->salary);
}

void displayEmployee(const struct Employee *emp)
{
    printf("Name: %s, ID: %d, Department: %s, Salary: %.2f\n",
           emp->name, emp->id, emp->department, emp->salary);
}

int main()
{
    struct Employee employees[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details for Employee %d\n", i + 1);
        inputEmployee(&employees[i]);
    }
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++)
    {
        displayEmployee(&employees[i]);
    }
    return 0;
}
