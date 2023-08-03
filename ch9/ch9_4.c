#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


void read_word(int count[26]) {
    while (1) {
        char ch = getchar();
        if (ch == '\n' || ch == EOF) {
            break;
        } else {
            ch = toupper(ch);
            if (ch >= 'A' || ch <= 'Z') {
                int index = ch - 'A';
                count[index]++;
            }
        }
    }
}

bool equal_array(int count1[26], int count2[26]) {
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return false;
        };
    }
    return true;
}

int main() {
    int count1[26] = { 0 };
    int count2[26] = { 0 };

    printf("Enter first word: ");
    read_word(count1);

    printf("Enter second word: ");
    read_word(count2);

    bool equal = equal_array(count1, count2);

    if (equal) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }

}