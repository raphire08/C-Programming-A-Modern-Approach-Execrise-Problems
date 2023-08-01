#include <stdio.h>

int main() {
    printf("Enter a sentence: ");
    char prevCh;
    int wordCount = 0;
    int chCount = 0;
    while (1) {
        char ch = getchar();
        if (!prevCh || ch != ' ' && ch != EOF && ch != '\n') {
            chCount = chCount + 1;
        } else if (ch == ' ' || ch == '\n' || ch == EOF) {
            wordCount = wordCount + 1;
        }
        prevCh = ch;
        if (ch == '\n' || ch == EOF) {
            break;
        }
    }
    printf("Average word count %.1f \n", chCount / (wordCount * 1.0));
}