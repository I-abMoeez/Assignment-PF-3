#include <stdio.h>

int main() {
    float mark1, mark2, mark3, average;
    char grade;
    char status[10];

    printf("Enter marks for subject 1: ");
    scanf("%f", &mark1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &mark2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &mark3);

    average = (mark1 + mark2 + mark3) / 3;

    if (average < 50) {
        grade = 'F';
        sprintf(status, "Fail");
    } else {
        sprintf(status, "Pass");
        if (average > 75) {
            grade = 'A';
        } else {
            grade = 'B'; }
    }
    printf("Average: %2f\n", average);
    printf("Status: %s\n", status);
    printf("Grade: %c\n", grade);

    return 0;
}
