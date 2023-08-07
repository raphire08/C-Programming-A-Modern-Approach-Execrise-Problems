#include <stdio.h>

#define N 100

int main() {
    char message[N];
    printf("Enter a message: ");
    char* p = &message[0];
    while (1) {
        char ch = getchar();
        if (p >= &message[N] || ch == '\n' || ch == EOF) {
            break;
        } else {
            *p++ = ch;
        }
    }
    for (char* i = p - 1; i >= &message[0]; i--) {
        printf("%c", *i);
    }
    printf("\n");

}