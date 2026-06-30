#include <stdio.h>

void bookTickets() {
    int totalSeats = 50, bookedSeats = 0, count;
    
    printf("Enter number of seats to book: ");
    scanf("%d", &count);

    if (bookedSeats + count <= totalSeats) {
        bookedSeats += count;
        printf("Successfully booked %d ticket(s)! Remaining seats: %d\n", count, totalSeats - bookedSeats);
    } else {
        printf("Failed booking. Only %d seat(s) available.\n", totalSeats - bookedSeats);
    }
}