#include<stdio.h>
#define PI 3.1415926
float area(float radius)
{
    return PI * radius * radius;

}
float circumference(float radius)
{
    return 2 * PI * radius;
}
int main()
{=
    float radius;
    printf("enter radius : ");
    scanf("%f", &radius);
    // calculating the area of circle
    printf("area = %f\n ", area(radius));
    // calculating the circumference of circle
    printf("circumference = %f\n ", circumference(radius));
    return 0;
}
 #include<stdio.h>
 float celsiustofahrenheit(float celsius)
 {
     return (celsius * 9 / 5) + 32;
 }
 int main()
 {
     float celsius, fahrenheit;
     printf("enter temperature in celsius : ");
     scanf("%f", &celsius);
  fahrenheit = celsiustofahrenheit(celsius);
     printf("%f celsius is equal to %f fahrenheit\n", celsius, fahrenheit);
     return 0;
 }
 #include<stdio.h>
 float calculateSimpleIntrest(float principal, float rate, float time)
 {
    return (principal * rate * time) / 100;
 }
 int main()
 {
     float principal, rate, time, intrest;
     printf("enter principal : ");
     scanf("%f", &principal);
     printf("enter rate : ");
     scanf("%f", &rate);
     printf("enter time : ");
     scanf("%f", &time);
     intrest = calculateSimpleIntrest(principal, rate, time);
     printf("simple intrest is %f\n", intrest);
     return 0;
 }
 #include<stdio.h>
 //to calculate  bmi
 float calculateBmi(float weight, float height)
 {
     return weight / (height * height);
 }
 int main()
 {
     float weight, height, bmi;
     printf("enter weight in kg : ");
     scanf("%f", &weight);
     printf("enter height in meter : ");
     scanf("%f", &height);
     bmi = calculateBmi(weight, height);
     printf("bmi is %f\n", bmi);
     return 0; 
 }
  #include<stdio.h>   
  program to swap two variables using call by reference and call by value
    void swapByValue(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;
        printf("inside swap by value a=%d b=%d\n", a, b);
    }
    int main()
    {
        int a, b;
        printf("enter two numbers : ");
        scanf("%d %d", &a, &b);
        printf("before swapping a=%d b=%d\n", a, b);
        swapByValue(a, b);
        printf("after swapping a=%d b=%d\n", a, b);
        return 0;
    }
     #include<stdio.h>
      void swapByReference(int *a, int *b)
      {
          int temp = *a;
          *a = *b;
          *b = temp;
          printf("inside swap by reference a=%d b=%d\n", *a, *b);
         

      }
      int main()
      {
          int a, b;
          printf("enter two numbers : ");
          scanf("%d %d", &a, &b);
          printf("before swapping a=%d b=%d\n", a, b);
          swapByReference(&a, &b);
          printf("after swapping a=%d b=%d\n", a, b);
          return 0;
      }
   #include<stdio.h>

// Function to calculate the average of marks
float calculateAverage(int marks[], int numSubjects) {
    int sum = 0;
    for (int i = 0; i < numSubjects; i++) {
        sum += marks[i];
    }
    return (float)sum / numSubjects;
}

// Function to assign a grade based on the average
char assignGrade(float average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int marks[5];
    float average;
    char grade;

    // Prompt user to enter marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Calculate average
    average = calculateAverage(marks, 5);

    // Assign grade
    grade = assignGrade(average);

    // Display the results
    printf("Total Marks: %.2f\n", average * 5);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
#include <stdio.h>

// Function to calculate the sum of even and odd numbers
void calculateSums(int n, int *sumEven, int *sumOdd) {
    *sumEven = 0;
    *sumOdd = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            *sumEven += i;
        } else {
            *sumOdd += i;
        }
    }
}

int main() {
    int n, sumEven, sumOdd;

    // Prompt user to enter the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the sums
    calculateSums(n, &sumEven, &sumOdd);

    // Display the results
    printf("Sum of even numbers from 1 to %d: %d\n", n, sumEven);
    printf("Sum of odd numbers from 1 to %d: %d\n", n, sumOdd);

    return 0;
}
#include <stdio.h>

int main() {
    int n, i = 1;
   int factorial = 1;

    // Prompt user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate factorial using while loop
    while (i <= n) {
        factorial *= i;
        i++;
    }

    // Display the result
   printf("Factorial of %d = %d\n", n, factorial);

    return 0;
}
#include <stdio.h>

int main() {
    int num, sum = 0;

    // Prompt user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate sum of digits using while loop
    while (num > 0) {
        sum += num % 10;//or sum = sum + num % 10;
        num /= 10; //or num = num / 10;
    }

    // Display the result
    printf("Sum of digits = %d\n", sum);

    return 0;
}