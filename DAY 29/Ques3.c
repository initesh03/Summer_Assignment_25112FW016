#include <stdio.h>
#include <string.h>

void stringOperations() {
    char str[50];
    int choice;
    printf("Enter string: ");
    scanf("%s", str);

    while(1) {
        printf("\nString: %s\n1. Length\n2. Reverse Display\n3. Exit\nChoice: ", str);
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Length: %lu\n", strlen(str));
        } else if (choice == 2) {
            printf("Reversed: ");
            for(int i = strlen(str) - 1; i >= 0; i--) putchar(str[i]);
            printf("\n");
        } else if (choice == 3) {
            break;
        }
    }
}