#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessingGame() {
    int target, guess;
    srand(time(0));
    target = (rand() % 100) + 1; // Number between 1 and 100

    printf("I have chosen a number between 1 and 100. Try to guess it!\n");
    
    while (1) {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Please enter a valid integer.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        
        if (guess < target) {
            printf("Too low! Try again.\n");
        } else if (guess > target) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the correct number.\n");
            break;
        }
    }
}