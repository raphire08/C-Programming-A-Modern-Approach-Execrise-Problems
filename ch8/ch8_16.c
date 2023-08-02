#include <stdio.h>
#include <ctype.h>

int main() {
    int count[26] = { 0 };

    printf("Enter first word: ");
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

    printf("Enter second word: ");
    while (1) {
        char ch = getchar();
        if (ch == '\n' || ch == EOF) {
            break;
        } else {
            ch = toupper(ch);
            if (ch >= 'A' || ch <= 'Z') {
                int index = ch - 'A';
                count[index]--;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < 26; i++) {
        sum += count[i];
        if (sum > 0) {
            printf("The words are not anagrams.\n");
            break;
        }
    }
    if (sum == 0) {
        printf("The words are anagrams.\n");
    }
}