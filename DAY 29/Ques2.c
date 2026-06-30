#include <stdio.h>

void arrayOperations() {
    int arr[50], size = 0, choice, value;

    while(1) {
        printf("\n1. Append Element\n2. View Array\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter integer: ");
            scanf("%d", &value);
            arr[size++] = value;
        } else if (choice == 2) {
            printf("Array: ");
            for(int i = 0; i < size; i++) printf("%d ", arr[i]);
            printf("\n");
        } else if (choice == 3) {
            break;
        }
    }
}