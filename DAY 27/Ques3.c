#include <stdio.h>

struct Salary {
    char empId[10];
    float base;
    float bonus;
    float total;
};

void salarySystem() {
    struct Salary s = {"E001", 5000.0, 1200.0, 0.0};
    s.total = s.base + s.bonus;

    printf("\n--- Salary Slips ---\n");
    printf("Emp ID: %s | Base: $%.2f | Bonus: $%.2f | Total Payroll: $%.2f\n", s.empId, s.base, s.bonus, s.total);
}