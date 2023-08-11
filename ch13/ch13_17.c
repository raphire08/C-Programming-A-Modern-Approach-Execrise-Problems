#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 100

int read_line(char str[], int n);
bool is_palindrome(const char* message);

int main() {
    char message[N];
    printf("Enter a message: ");
    read_line(message, N);
    bool palindrome = is_palindrome(message);
    if (palindrome) {
        printf("Palindrome \n");
    } else {
        printf("Not a palindrome \n");
    }
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

bool is_palindrome(const char* message) {
    char* start = message;
    char* p;
    while (1) {
        if (*message == '\0') {
            p = --message;
            break;
        }
        message++;
    }
    for (char* i = start; i < start + ((p - start) / 2); i++) {
        if (toupper(*i) != toupper(*p)) {
            return false;
            break;
        }
        p--;
    }
    return true;
}