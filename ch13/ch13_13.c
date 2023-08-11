#include <stdio.h>

int read_line(char str[], int n);
void encrypt(char* message, int shift);

int main() {
    char message[800];
    int n;

    printf("Enter message to be encrypted: ");
    read_line(message, 800);

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    encrypt(message, n);

    printf("Encrypted Message: ");
    printf("%s\n", message);
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

void encrypt(char* message, int shift) {
    while (*message != '\0') {
        if (*message >= 'A' && *message <= 'Z') {
            char msg = (*message - 'A' + shift) % 26 + 'A';
            *message = msg;
        } else if (*message >= 'a' && *message <= 'z') {
            char msg = (*message - 'a' + shift) % 26 + 'a';
            *message = msg;
        }
        message++;
    }
}
