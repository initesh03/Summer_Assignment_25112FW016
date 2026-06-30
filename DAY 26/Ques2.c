#include <stdio.h>

void checkVotingEligibility() {
    int age;
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input.\n");
        return;
    }
    
    if (age >= 18) {
        printf("You are eligible to vote!\n");
    } else if (age < 0) {
        printf("Age cannot be negative.\n");
    } else {
        printf("You are not eligible to vote. Wait %d more year(s).\n", 18 - age);
    }
}