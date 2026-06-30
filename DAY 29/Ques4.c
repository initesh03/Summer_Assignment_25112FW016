#include <stdio.h>
#include <string.h>

struct Item {
    char name[30];
    int qty;
};

void inventorySystem() {
    struct Item inv[10];
    int count = 0, choice;

    while (1) {
        printf("\n1. Add Item\n2. View Stock Summary\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1 && count < 10) {
            printf("Item name: ");
            scanf("%s", inv[count].name);
            printf("Quantity: ");
            scanf("%d", &inv[count].qty);
            count++;
        } else if (choice == 2) {
            printf("\n--- Current Inventory ---\n");
            for(int i = 0; i < count; i++) {
                printf("%s: %d items\n", inv[i].name, inv[i].qty);
            }
        } else {
            break;
        }
    }
}