#include <stdio.h>

#define NUM_CARDS 5

int hand[5][2];

void sort_hand(int hand[][2]) {
    printf("hand before sort: ");
    for (int i = 0; i < NUM_CARDS; i++) {
        printf(" %d", hand[i][0]);
    }

    for (int iter = NUM_CARDS; iter > 0; iter--) {
        int largest = hand[0][0];
        int index = 0;
        for (int i = 1; i < iter; i++) {
            if (hand[i][0] > largest) {
                largest = hand[i][0];
                index = i;
            }
        }
        printf("largest %d\n", largest);
        printf("index %d\n", index);
        printf("iter %d\n", iter);
        int temp1 = hand[iter - 1][0];
        int temp2 = hand[iter - 1][1];
        hand[iter - 1][0] = hand[index][0];
        hand[iter - 1][1] = hand[index][1];
        hand[index][0] = temp1;
        hand[index][1] = temp2;
    }

    printf("hand after sort: ");
    for (int i = 0; i < NUM_CARDS; i++) {
        printf(" %d", hand[i][0]);
    }
}

int main() {

    hand[0][0] = 3;
    hand[1][0] = 7;
    hand[2][0] = 0;
    hand[3][0] = 2;
    hand[4][0] = 5;

    sort_hand(hand);

}