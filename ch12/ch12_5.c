#include <stdio.h>

int main() {
    char endCh;
    char words[500];
    char* p = &words[0];

    printf("Enter a sentence: ");

    while (1) {
        char input = getchar();
        if (input == '?' || input == '.') {
            endCh = input;
            break;
        } else {
            *p++ = input;
        }
    }

    for (char* j = p; j >= &words[0]; j--) {
        int numChars = 0;
        if (*j == ' ') {
            for (char* k = j + 1; k < p; k++) {
                printf("%c", *k);
            }
            printf(" ");
            p = j;
        } else if (j == &words[0]) {
            for (char* k = j; k < p; k++) {
                printf("%c", *k);
            }
            break;
        }
    }
    printf("%c \n", endCh);
}