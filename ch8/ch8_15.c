#include <stdio.h>

int main() {
    int words[80];
    int n;

    printf("Enter message to be encrypted: ");
    int i = 0;
    while (1) {
        char ch = getchar();
        if (ch == '\n' || ch == EOF) {
            break;
        } else {
            words[i] = ch;
        }
        i++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    printf("Encrypted Message: ");
    for (int j = 0; j < i; j++) {
        if (words[j] >= 'A' && words[j] <= 'Z') {
            char msg = (words[j] - 'A' + n) % 26 + 'A';
            printf("%c", msg);
        } else if (words[j] >= 'a' && words[j] <= 'z') {
            char msg = (words[j] - 'a' + n) % 26 + 'a';
            printf("%c", msg);
        } else {
            printf("%c", words[j]);
        }
    }
    printf("\n");
}