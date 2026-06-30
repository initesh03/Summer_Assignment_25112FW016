#include <stdio.h>

void generateMarksheet(char name[], int math, int science, int english) {
    int total = math + science + english;
    float percentage = total / 3.0;
    char grade;

    if (percentage >= 80) grade = 'A';
    else if (percentage >= 60) grade = 'B';
    else if (percentage >= 40) grade = 'C';
    else grade = 'F';

    printf("\n==========\n");
    printf("          MARKSHEET          \n");
    printf("============\n");
    printf("Student Name: %s\n", name);
    printf("Math: %d/100\nScience: %d/100\nEnglish: %d/100\n", math, science, english);
    printf("-------------\n");
    printf("Total Marks: %d/300\n", total);
    printf("Percentage:  %.2f%%\n", percentage);
    printf("Final Grade: %c\n", grade);
    printf("==============\n");
}