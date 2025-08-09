#include <stdio.h>

struct Student
{
    char name[50];
    int rollNumber;
    int marks[3];
    int total;
    float average;
    char grade;
};

void inputStudent(struct Student *stu)
{
    printf("Enter Name: ");
    scanf("%s", stu->name);
    printf("Enter Roll Number: ");
    scanf("%d", &stu->rollNumber);
    printf("Enter marks in 3 subjects: ");
    stu->total = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &stu->marks[i]);
        stu->total += stu->marks[i];
    }
    stu->average = stu->total / 3.0;
    if (stu->average >= 90)
    {
        stu->grade = 'A';
    }
    else if (stu->average >= 75)
    {
        stu->grade = 'B';
    }
    else if (stu->average >= 50)
    {
        stu->grade = 'C';
    }
    else
    {
        stu->grade = 'D';
    }
}

void displayStudent(const struct Student *stu)
{
    printf("Name: %s, Roll Number: %d, Total: %d, Average: %.2f, Grade: %c\n",
           stu->name, stu->rollNumber, stu->total, stu->average, stu->grade);
}

int main()
{
    struct Student students[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details for Student %d\n", i + 1);
        inputStudent(&students[i]);
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++)
    {
        displayStudent(&students[i]);
    }
    return 0;
}
