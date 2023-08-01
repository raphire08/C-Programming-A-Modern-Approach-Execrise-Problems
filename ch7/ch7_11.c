#include <stdio.h>

int main() {
    char ch;
    int wordCount = 0;
    char prevCh;
    int firstLetterDone = 0;
    printf("Enter a first name and a last name: ");
    while (1) {
        char input = getchar();
        if (input == '\n' || input == EOF) {
            break;
        } else if (input == ' ') {
            prevCh = input;
            continue;
        } else {
            if (prevCh == ' ' || !prevCh) {
                wordCount++;
            }
            if (wordCount == 1 && (prevCh == ' ' || !prevCh)) {
                ch = input;
            }
            if (wordCount == 2) {
                printf("%c", input);
            }
            prevCh = input;
        }
    }
    printf(", %c. \n", ch);
}