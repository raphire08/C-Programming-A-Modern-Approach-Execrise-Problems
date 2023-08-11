#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int read_line(char str[], int n);
bool are_anagrams(const char* word1, const char* word2);

int main() {
    char word1[100];
    char word2[100];
    printf("Enter first word: ");
    read_line(word1, 100);

    printf("Enter second word: ");
    read_line(word2, 100);

    bool anagram = are_anagrams(word1, word2);
    if (anagram) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }
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

bool are_anagrams(const char* word1, const char* word2) {
    int count[26] = { 0 };
    while (*word1 != '\0') {
        char ch = toupper(*word1);
        if (ch >= 'A' || ch <= 'Z') {
            int index = (int)ch - 'A';
            count[index]++;
        }
        word1++;
    }


    while (*word2 != '\0') {
        char ch = toupper(*word2);
        if (ch >= 'A' || ch <= 'Z') {
            int index = (int)ch - 'A';
            count[index]--;
        }
        word2++;
    }


    int sum = 0;
    for (int i = 0; i < 26; i++) {
        sum += count[i];
        if (sum != 0) {
            return false;
        }
    }
    return true;
}