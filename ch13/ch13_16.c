#include <stdio.h>

#define N 100

int read_line(char str[], int n);
void reverse(char* message);

int main() {
    char message[N];
    printf("Enter a message: ");
    char* p = &message[0];
    read_line(message, N);
    reverse(message);
    printf("Reversal is %s\n", message);

}

int read_line(char str[], int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

void reverse(char* message) {
    char* start = message;
    char* end;
    while (1) {
        if (*message == '\0') {
            end = --message;
            break;
        }
        message++;
    }
    while (end - start > 0) {
        char ch = *start;
        *start = *end;
        *end = ch;
        start++;
        end--;
    }
}