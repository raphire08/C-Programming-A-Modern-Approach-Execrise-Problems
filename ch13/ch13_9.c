#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n);
int compute_vowel_count(const char* sentence);

int main() {
    printf("Enter a sentence: ");
    char sentence[1000];
    read_line(sentence, 1000);
    int count = compute_vowel_count(sentence);
    printf("Your sentence contains %d vowels \n", count);
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

int compute_vowel_count(const char* sentence) {
    int count = 0;
    while (*sentence != '\0') {
        char ch = toupper(*sentence);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
        sentence++;
    }
    return count;
}