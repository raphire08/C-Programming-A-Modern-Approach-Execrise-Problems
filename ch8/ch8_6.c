#include <stdio.h>
#include <ctype.h>

#define SIZE 50

int main() {
    printf("Enter a message: ");
    char letters[SIZE];
    int counter = 0;
    while (1) {
        char ch = getchar();
        if (ch == '\n' || ch == EOF) {
            break;
        } else {
            letters[counter] = ch;
            counter++;
        }
    }
    counter = 0;
    while (1) {
        if (!letters[counter]) {
            break;
        } else {
            letters[counter] = toupper(letters[counter]);
            if (letters[counter] == 'A') {
                printf("%c", '4');
            } else if (letters[counter] == 'B') {
                printf("%c", '8');
            } else if (letters[counter] == 'E') {
                printf("%c", '3');
            } else if (letters[counter] == 'I') {
                printf("%c", '1');
            } else if (letters[counter] == 'O') {
                printf("%c", '0');
            } else if (letters[counter] == 'S') {
                printf("%c", '5');
            } else {
                printf("%c", letters[counter]);
            }
            counter++;
        }
    }
    printf("\n");
}