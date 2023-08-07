#include <stdio.h>

#define N 100

int main() {
    char message[N];
    printf("Enter a message: ");
    int counter = 0;
    while (1) {
        char ch = getchar();
        if (counter == N || ch == '\n' || ch == EOF) {
            break;
        } else {
            message[counter] = ch;
            counter++;
        }
    }
    for (int i = counter - 1; i >= 0; i--) {
        printf("%c", message[i]);
    }
    printf("\n");

}