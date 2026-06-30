#include <stdio.h>

struct BankAccount {
    char owner[50];
    char accountNum[20];
    float balance;
};

void displayAccount() {
    struct BankAccount acc = {"Robert", "11223344", 2500.0};
    printf("Account Holder: %s | Acc No: %s | Balance: $%.2f\n", acc.owner, acc.accountNum, acc.balance);
}