#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, compChoice;

    // Seed random number generator
    srand(time(0));

    // User input
    printf("Let's play Rock, Paper, Scissors!\n");
    printf("Enter your choice:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Your choice: ");
    scanf("%d", &userChoice);

    // Generate computer's choice
    compChoice = (rand() % 3) + 1;

    // Show computer's choice
    printf("Computer chose: ");
    if (compChoice == 1) printf("Rock\n");
    else if (compChoice == 2) printf("Paper\n");
    else printf("Scissors\n");

    // Determine the winner
    if (userChoice == compChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && compChoice == 3) ||
               (userChoice == 2 && compChoice == 1) ||
               (userChoice == 3 && compChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}
