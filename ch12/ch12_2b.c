#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 100

int main() {
    char message[N];
    char* p = &message[0];
    bool palindrome = true;

    printf("Enter a message: ");

    while (1) {
        char ch = getchar();
        ch = toupper(ch);
        if (p >= &message[N] || ch == '\n' || ch == EOF) {
            break;
        } else if (ch >= 'A' && ch <= 'Z') {
            *p++ = ch;
        }
    }

    for (char* i = &message[0]; i < &message[0] + ((p - &message[0]) / 2); i++) {
        if (*i != *(p - 1)) {
            printf("Not a palindrome \n");
            palindrome = false;
            break;
        }
        p--;
    }
    if (palindrome) {
        printf("Palindrome \n");
    }
}