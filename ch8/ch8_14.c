#include <stdio.h>

int main() {
    char endCh;
    char words[500];
    int i = 0;

    printf("Enter a sentence: ");

    while (1) {
        char input = getchar();
        if (input == '?' || input == '.' || input == '?') {
            endCh = input;
            break;
        } else {
            words[i] = input;
            i++;
        }
    }

    for (int j = i; j >= 0; j--) {
        int numChars = 0;
        if (words[j] == ' ') {
            for (int k = j + 1; k < i; k++) {
                printf("%c", words[k]);
            }
            printf(" ");
            i = j;
        } else if (j == 0) {
            for (int k = j; k < i; k++) {
                printf("%c", words[k]);
            }
            break;
        }
    }
    printf("%c \n", endCh);
}