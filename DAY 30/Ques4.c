#include <stdio.h>
#include <string.h>

char cartItems[5][30];
float cartPrices[5];
int itemCount = 0;

void addItem(char name[], float price) {
    if (itemCount < 5) {
        strcpy(cartItems[itemCount], name);
        cartPrices[itemCount] = price;
        itemCount++;
        printf("Added standard item: %s costing $%.2f\n", name, price);
    }
}

float calculateTotal() {
    float sum = 0;
    for(int i = 0; i < itemCount; i++) {
        sum = sum +  cartPrices[i];
    }
    return sum;
}

void printInvoice() {
    printf("\n=== FINAL INVOICE ===\n");
    for(int i = 0; i < itemCount; i++) {
        printf("%d. %s ---- $%.2f\n", i + 1, cartItems[i], cartPrices[i]);
    }
    printf("------\n");
    printf("Total Due: $%.2f\n", calculateTotal());
    printf("=======\n");
}

int main() {
    addItem("Keyboard", 89.99);
    addItem("Wireless Mouse", 25.50);
    printInvoice();
    return 0;
}