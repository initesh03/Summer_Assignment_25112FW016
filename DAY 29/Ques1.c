#include <stdio.h>

void menuCalculator() {
    int choice;
    float num1, num2;

    while(1) {
        printf("\n--- Calculator ---\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) break;
        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if (choice == 1) printf("Result: %.2f\n", num1 + num2);
            else if (choice == 2) printf("Result: %.2f\n", num1 - num2);
            else if (choice == 3) printf("Result: %.2f\n", num1 * num2);
            else if (choice == 4) printf("Result: %.2f\n", num2 != 0 ? num1 / num2 : 0.0);
        } else {
            printf("Invalid Choice\n");
        }
    }
}