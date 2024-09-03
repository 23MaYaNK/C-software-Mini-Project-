#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Gameplay();

int main() {
    char pAgain;
    do {
        Gameplay();
        printf("\nDo you want to play again? (yes/no): ");
        scanf(" %c", &pAgain);
    } while(pAgain == 'y' || pAgain == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}

void Gameplay() {
    int userChoice, computerChoice;
    srand(time(0));  // Seed the random number generator

    printf("Welcome to Stone-Paper-Scissors!\n");
    printf("Enter your choice:\n");
    printf("1. Stone\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Your choice: ");
    scanf("%d", &userChoice);

    if(userChoice >3 || userChoice <1) {
        printf("Invalid choice! Please choose a number between 1 and 3.\n");
        return;
    }

    computerChoice = rand() % 3 + 1;  // Randomly generate computer's choice

    // Display choices
    printf("You chose: ");
    if(userChoice == 1) printf("Stone\n");
    else if(userChoice == 2) printf("Paper\n");
    else printf("Scissors\n");

    printf("Computer chose: ");
    if(computerChoice == 1) printf("Stone\n");
    else if(computerChoice == 2) printf("Paper\n");
    else printf("Scissors\n");

    // Determine the winner
    if(userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if((userChoice == 1 && computerChoice == 3) ||
              (userChoice == 2 && computerChoice == 1) ||
              (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}
