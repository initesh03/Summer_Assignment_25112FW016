#include <stdio.h>
#include <string.h>

struct Contact {
    char name[30];
    char phone[15];
};

void contactManager() {
    struct Contact directory[1];
    strcpy(directory[0].name, "Emma");
    strcpy(directory[0].phone, "555-0199");

    char searchName[30];
    printf("Enter contact name to search: ");
    scanf("%s", searchName);

    if (strcmp(searchName, directory[0].name) == 0) {
        printf("Found: %s -> %s\n", directory[0].name, directory[0].phone);
    } else {
        printf("Contact not found.\n");
    }
}