#include <stdio.h>

void atmSimulation() {
    float balance = 5000.0;
    int choice;
    float amount;

    while (1) {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Select an option (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("$%.2f deposited successfully.\n", amount);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("$%.2f withdrawn successfully.\n", amount);
                } else if (amount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    printf("Invalid withdrawal amount.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return;
            default:
                printf("Invalid option. Please choose between 1 and 4.\n");
        }
    }
}