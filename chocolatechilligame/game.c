#include <stdio.h>

int main() {
    int current = 13;      // starts at 13, decrements down to 1 (chilli)
    int choice;
    int turn = 1;           // 1 = Opponent 1, 2 = Opponent 2

    printf("=====================================\n");
    printf("   CHOCOLATE - CHILLI GAME (13 to 1)\n");
    printf("=====================================\n");
    printf("Rules: Count starts at 13 and goes down.\n");
    printf("Number 1 has the CHILLI inside.\n");
    printf("Each turn, subtract 1, 2, or 3 from the count.\n");
    printf("Whoever is forced to land on 1 LOSES!\n\n");

    while (current > 1) {
        printf("Current count: %d\n", current);

        if (turn == 1)
            printf("Opponent 1's turn.\n");
        else
            printf("Opponent 2's turn.\n");

        // Input validation loop
        while (1) {
            printf("Enter a number (1 to 3): ");
            scanf("%d", &choice);

            if (choice < 1 || choice > 3) {
                printf("Invalid input! Please choose numbers between 1 to 3.\n");
                continue;
            }

            // prevent going below 1 (can't subtract more than what's left above 1)
            if (current - choice < 1) {
                printf("Invalid move! You can't go below 1. Choose a smaller number.\n");
                continue;
            }

            break; // valid input, exit validation loop
        }

        current -= choice;

        printf("New count: %d\n\n", current);

        if (current == 1) {
            if (turn == 1)
                printf(" Opponent 1 landed on 1 and got the CHILLI! Opponent 2 WINS!\n");
            else
                printf(" Opponent 2 landed on 1 and got the CHILLI! Opponent 1 WINS!\n");
            break;
        }

        // switch turn
        turn = (turn == 1) ? 2 : 1;
    }

    return 0;
}