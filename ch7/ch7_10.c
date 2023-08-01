#include <stdio.h>
#include <ctype.h>

int main() {
    int count = 0;
    printf("Enter a sentence: ");
    while (1) {
        char ch = getchar();
        if (ch == '\n' || ch == EOF) {
            break;
        } else {
            ch = toupper(ch);
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                count++;
            }
        }
    }
    printf("Your sentence contains %d vowels \n", count);
}