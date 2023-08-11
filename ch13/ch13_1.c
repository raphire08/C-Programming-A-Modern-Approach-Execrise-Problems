#include <stdio.h>
#include <string.h>

#define WORD_LEN 20

int read_line(char str[], int n);

int main(void) {
    char smallest_word[WORD_LEN + 1], largest_word[WORD_LEN + 1];
    char word[WORD_LEN + 1];

    printf("Enter a word: ");
    read_line(word, WORD_LEN + 1);
    strcpy(smallest_word, word);
    strcpy(largest_word, word);

    for (;;) {
        printf("Enter a word: ");
        read_line(word, WORD_LEN + 1);
        if (strlen(word) == 4) {
            break;
        }
        printf("%d\n", strcmp(smallest_word, word));
        if (strcmp(smallest_word, word) > 0) {
            strcpy(smallest_word, word);
        }
        printf("%d\n", strcmp(largest_word, word));
        if (strcmp(largest_word, word) < 0) {
            strcpy(largest_word, word);
        }

    }
    printf("Smallest word: %s \n", smallest_word);
    printf("Largest word: %s \n", largest_word);
}



int read_line(char str[], int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}