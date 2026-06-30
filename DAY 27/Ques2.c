#include <stdio.h>
#include <string.h>

struct Employee {
    char empId[10];
    char name[50];
    char department[30];
};

void employeeSystem() {
    struct Employee emp;
    strcpy(emp.empId, "E001");
    strcpy(emp.name, "John Doe");
    strcpy(emp.department, "IT");

    printf("\n--- Employee Directory ---\n");
    printf("ID: %s | Name: %s | Department: %s\n", emp.empId, emp.name, emp.department);
}