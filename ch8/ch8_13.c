#include <stdio.h>

int main() {
    char ch;
    int wordCount = 0;
    char prevCh;
    int name[20];
    printf("Enter a first name and a last name: ");
    int i = 0;
    int letterCaptured = 0;
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
            if (wordCount == 0 && !letterCaptured) {
                ch = input;
                letterCaptured = 1;
            } else if (wordCount == 1) {
                name[i] = input;
                i++;
            }
            prevCh = input;
        }
    }
    printf("You entered the name: ");
    for (int j = 0; j <= i; j++) {
        printf("%c", name[j]);
    }
    printf(", %c. \n", ch);
}