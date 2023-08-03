#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

int roll_dice() {
    int roll1 = (rand() % 6) + 1;
    int roll2 = (rand() % 6) + 1;
    return roll1 + roll2;
}

bool play_game() {
    int point;
    int first_roll = roll_dice();
    printf("You rolled: %d\n", first_roll);
    if (first_roll == 7 || first_roll == 11) {
        return true;
    } else if (first_roll == 2 || first_roll == 3 || first_roll == 12) {
        return false;
    } else {
        point = first_roll;
        printf("Your point is %d\n", point);
    }
    while (1) {
        int roll = roll_dice();
        printf("You rolled: %d\n", roll);
        if (roll == 7) {
            return false;
        } else if (roll == point) {
            return true;
        }
    }
}

int main() {
    int wins = 0, losses = 0;
    char again = 'Y';

    srand((unsigned)time(NULL));

    while (again == 'Y' || again == 'y') {
        bool won = play_game();
        if (won) {
            printf("You win! \n\n");
            wins++;
        } else {
            printf("You loose! \n\n");
            losses++;
        }

        printf("Play again? ");
        again = getchar();
        getchar();
        printf("\n");
    }
    if (toupper(again) != 'Y') {
        printf("Wins: %d, Losses: %d \n", wins, losses);
    }
}