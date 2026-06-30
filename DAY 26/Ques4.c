#include <stdio.h>

void quizApplication() {
    int score = 0;
    char ans;

    printf("\nQuestion 1: What is the capital of France?\n");
    printf("A. Berlin\nB. Madrid\nC. Paris\nD. Rome\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &ans);
    if (ans == 'C' || ans == 'c') { printf("Correct!\n"); score++; }
    else { printf("Wrong! Correct answer is C.\n"); }

    printf("\nQuestion 2: What is 5 + 7?\n");
    printf("A. 10\nB. 11\nC. 12\nD. 13\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &ans);
    if (ans == 'C' || ans == 'c') { printf("Correct!\n"); score++; }
    else { printf("Wrong! Correct answer is C.\n"); }

    printf("\nQuiz Finished! Your final score: %d/2\n", score);
}