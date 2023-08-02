#include <stdio.h>
#include <ctype.h>

int main() {
    int sum = 0;
    int values[26] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
    printf("Enter a word: ");
    while (1) {
        char ch = getchar();
        if (ch == '\n' || ch == EOF) {
            break;
        } else {
            ch = toupper(ch);
            int index = ch - 65;
            sum += values[index];
        }
    }
    printf("Scabble value: %d\n", sum);
}