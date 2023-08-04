#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

int hand[NUM_CARDS][2];
bool straight, flush, four, three;
int pairs;

void read_cards(int hand[][2]);
void analyze_hand(int hand[][2]);
void print_result(void);
void sort_ranks(int hand[][2]);

int main(void) {

    for (;;) {
        read_cards(hand);
        analyze_hand(hand);
        print_result();
    }
    // sort_ranks(hand);
    // for (int i = 0; i < NUM_CARDS; i++) {
    //     printf(" %d", hand[i][0]);
    // }

}


void read_cards(int hand[][2]) {
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    bool duplicate = false;
    int cards_read = 0;

    for (int i = 0; i < NUM_CARDS; i++) {
        hand[i][0] = 0;
        hand[i][1] = 0;
    }

    while (cards_read < NUM_CARDS) {
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        suit_ch = getchar();

        while ((ch = getchar()) != '\n') {
            if (ch != ' ') {
                bad_card = true;
            }
        }

        switch (rank_ch) {
            case '0':             exit(EXIT_SUCCESS);
            case '2':             rank = 0; break;
            case '3':             rank = 1; break;
            case '4':             rank = 2; break;
            case '5':             rank = 3; break;
            case '6':             rank = 4; break;
            case '7':             rank = 5; break;
            case '8':             rank = 6; break;
            case '9':             rank = 7; break;
            case 't': case 'T':   rank = 8; break;
            case 'j': case 'J':   rank = 9; break;
            case 'q': case 'Q':   rank = 10; break;
            case 'k': case 'K':   rank = 11; break;
            case 'a': case 'A':   rank = 12; break;
            default:              bad_card = true;
        }

        switch (suit_ch) {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        for (int i = 0; i < cards_read; i++) {
            if (hand[i][0] == rank && hand[i][1] == suit) {
                duplicate = true;
            }
        }

        if (bad_card) {
            printf("Bad card; ignored.\n");
        } else if (duplicate) {
            printf("Duplicate card; ignored.\n");
            duplicate = false;
        } else {
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
    }
}

void analyze_hand(int hand[][2]) {
    int num_consec = 0;
    int rank, suit;
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    // check for flush
    suit = hand[0][1];
    int same_suit_count = 1;
    for (int i = 1; i < NUM_CARDS; i++) {
        if (hand[i][1] == suit) {
            same_suit_count++;
        }
    }
    if (same_suit_count == NUM_CARDS) {
        flush = true;
    }

    // sort hand
    for (int iter = NUM_CARDS; iter > 0; iter--) {
        int largest = hand[0][0];
        int index = 0;
        for (int i = 1; i < iter; i++) {
            if (hand[i][0] > largest) {
                largest = hand[i][0];
                index = i;
            }
        }
        int temp1 = hand[iter - 1][0];
        int temp2 = hand[iter - 1][1];
        hand[iter - 1][0] = hand[index][0];
        hand[iter - 1][1] = hand[index][1];
        hand[index][0] = temp1;
        hand[index][1] = temp2;
    }

    // check for straight and 4 and 3 and pairs
    int first = hand[0][0];
    int same_count = 0;
    for (int i = 1; i < NUM_CARDS; i++) {

        if (hand[i][0] == (hand[i - 1][0] + 1)) {
            num_consec++;
        } else {
            num_consec = 0;
        }

        if (hand[i][0] == hand[i - 1][0]) {
            same_count++;
        } else {
            same_count = 0;
        }

        if (same_count == 3) {
            four = true;
        } else if (same_count == 2) {
            three = true;
        } else if (same_count == 1) {
            pairs++;
        }

    }
    printf("num consec %d \n", num_consec);
    if (num_consec == NUM_CARDS - 1) {
        straight = true;
        return;
    }
}

void print_result(void) {

    if (straight & flush)           printf("Straight flush");
    else if (four)                  printf("Four of a kind");
    else if (three && pairs == 1)   printf("Full house");
    else if (flush)                 printf("Flush");
    else if (straight)              printf("Straight");
    else if (three)                 printf("Three fo a kind");
    else if (pairs == 2)            printf("Two pairs");
    else if (pairs == 1)            printf("Pair");
    else                            printf("High card");

    printf("\n\n");
}


