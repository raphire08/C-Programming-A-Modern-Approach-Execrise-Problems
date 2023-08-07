#include <stdio.h>

#define N 100

int main() {
    char message[N];
    printf("Enter a message: ");
    char* p = message;
    while (1) {
        char ch = getchar();
        if (p >= message + N || ch == '\n' || ch == EOF) {
            break;
        } else {
            *p++ = ch;
        }
    }
    for (char* i = p - 1; i >= message; i--) {
        printf("%c", *i);
    }
    printf("\n");

}