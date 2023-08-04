#include <stdio.h>

#define NUM_SEG 7
#define MAX_DIGITS 100
#define DIGIT_HEIGHT 5

char digits[DIGIT_HEIGHT][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(int counter);

int main() {
    clear_digits_array();
    printf("Enter a number: ");
    int counter = 0;
    while (1) {
        char ch = getchar();
        if (ch >= '0' && ch <= '9') {
            process_digit(ch - '0', counter);
            counter++;
        } else if (ch == '\n' || ch == EOF) {
            print_digits_array(counter);
            break;
        }
    }
}

void clear_digits_array() {
    for (int i = 0; i < DIGIT_HEIGHT; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++) {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position) {
    int segment[10][NUM_SEG] = {
  { 1, 1, 1, 1, 1, 1, 0 },
  { 0, 1, 1, 0, 0, 0, 0 },
  { 1, 1, 0, 1, 1, 0, 1 },
  { 1, 1, 1, 1, 0, 0, 1 },
  { 0, 1, 1, 0, 0, 1, 1 },
  { 1, 0, 1, 1, 0, 1, 1 },
  { 1, 0, 1, 1, 1, 1, 1 },
  { 1, 1, 1, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 1, 1, 1 },
  { 1, 1, 1, 1, 0, 1, 1 }, };

    int shift = 4 * position;

    if (segment[digit][0] == 1) {
        digits[0][1 + shift] = '-';
    }
    if (segment[digit][1] == 1) {
        digits[1][2 + shift] = '|';
    }
    if (segment[digit][2] == 1) {
        digits[3][2 + shift] = '|';
    }
    if (segment[digit][3] == 1) {
        digits[4][1 + shift] = '-';
    }
    if (segment[digit][4] == 1) {
        digits[3][0 + shift] = '|';
    }
    if (segment[digit][5] == 1) {
        digits[1][0 + shift] = '|';
    }
    if (segment[digit][6] == 1) {
        digits[2][1 + shift] = '-';
    }
}

void print_digits_array(int position) {
    for (int i = 0; i < DIGIT_HEIGHT; i++) {
        for (int j = 0; j < position * 4; j++) {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}