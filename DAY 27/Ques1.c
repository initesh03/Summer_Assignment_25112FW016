#include <stdio.h>
#include <string.h>

struct Student {
    char rollNo[10];
    char name[50];
    char grade[5];
};

void studentSystem() {
    struct Student students[2];
    
    strcpy(students[0].rollNo, "S101");
    strcpy(students[0].name, "Alice");
    strcpy(students[0].grade, "A");

    strcpy(students[1].rollNo, "S102");
    strcpy(students[1].name, "Bob");
    strcpy(students[1].grade, "B");

    printf("\n--- Student Records ---\n");
    for(int i = 0; i < 2; i++) {
        printf("Roll No: %s | Name: %s | Grade: %s\n", students[i].rollNo, students[i].name, students[i].grade);
    }
}