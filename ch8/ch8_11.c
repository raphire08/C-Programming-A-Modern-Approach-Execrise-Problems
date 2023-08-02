#include <stdio.h>

int main() {
    char output[15];
    printf("Enter a phone number: ");
    int i = 0;
    while (1) {
        char ch = getchar();
        if (ch == '\n' || ch == EOF) {
            break;
        } else {
            output[i] = ch;
        }
        i++;
    }
    printf("In numeric form: ");
    for (int j = 0; j < 15; j++) {
        if (output[j]) {
            if (output[j] >= 'A' && output[j] < 'Z') {
                printf("%d", (output[j] - 'A') / 3 + 2);
            } else {
                printf("%c", output[j]);
            }
        }
    }
    printf("\n");
}