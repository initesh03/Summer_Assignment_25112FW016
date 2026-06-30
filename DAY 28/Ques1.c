#include <stdio.h>
#include <string.h>

void librarySystem() {
    char bookTitle[50] = "Python Basics";
    char status[15] = "Available";
    char choice[50];

    printf("Enter book title to borrow: ");
    scanf(" %[^\n]s", choice);

    if (strcmp(choice, bookTitle) == 0 && strcmp(status, "Available") == 0) {
        strcpy(status, "Borrowed");
        printf("You have borrowed '%s'.\n", bookTitle);
    } else {
        printf("Sorry, book is unavailable.\n");
    }
}