#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 100

int main() {
    char message[N];
    int counter = 0;
    bool palindrome = true;

    printf("Enter a message: ");

    while (1) {
        char ch = getchar();
        ch = toupper(ch);
        if (counter == N || ch == '\n' || ch == EOF) {
            break;
        } else if (ch >= 'A' && ch <= 'Z') {
            message[counter] = ch;
            counter++;
        }
    }

    for (int i = 0; i < counter / 2; i++) {
        if (message[i] != message[counter - (i + 1)]) {
            printf("Not a palindrome \n");
            palindrome = false;
            break;
        }
    }
    if (palindrome) {
        printf("Palindrome \n");
    }
}