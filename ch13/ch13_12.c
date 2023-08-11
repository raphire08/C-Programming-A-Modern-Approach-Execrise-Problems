#include <stdio.h>

#define MAX_WORDS 30
#define MAX_CHARS 20

int main() {
    char endCh;
    char sentence[MAX_WORDS][MAX_CHARS + 1];
    int chCount = 0, wordCount = 0;

    printf("Enter a sentence: ");

    while (1) {
        char input = getchar();
        if (input == '?' || input == '.') {
            endCh = input;
            break;
        } else if (input == ' ') {
            sentence[wordCount][chCount] = '\0';
            wordCount++;
            chCount = 0;
        } else {
            sentence[wordCount][chCount] = input;
            chCount++;
        }
    }

    for (int j = wordCount; j >= 0; j--) {
        printf(" %s", sentence[j]);
    }
    printf("%c \n", endCh);
}