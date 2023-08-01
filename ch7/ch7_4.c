#include <stdio.h>

int main() {
    printf("Enter a phone number: ");
    while (1) {
        char ch = getchar();
        if (ch == '\n' || ch == EOF) {
            break;
        } else if (ch >= 'A' && ch < 'Z') {
            printf("%d", (ch - 'A') / 3 + 2);
        } else {
            printf("%c", ch);
        }

    }
    printf("\n");
}