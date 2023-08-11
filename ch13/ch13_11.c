#include <stdio.h>

int read_line(char str[], int n);
double compute_average_word_length(const char* sentece);

int main() {
    printf("Enter a sentence: ");
    char sentence[1000];
    read_line(sentence, 1000);
    double avg = compute_average_word_length(sentence);
    printf("Average word count %.1f \n", avg);
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

double compute_average_word_length(const char* sentence) {
    char prevCh;
    int wordCount = 0;
    int chCount = 0;
    while (1) {
        if (!prevCh || *sentence != ' ' && *sentence != '\0') {
            chCount = chCount + 1;
        } else if (*sentence == ' ' || *sentence == '\0') {
            wordCount = wordCount + 1;
        }
        if (*sentence == '\0') break;
        prevCh = *sentence++;
    }
    return chCount / (wordCount * 1.0);
}