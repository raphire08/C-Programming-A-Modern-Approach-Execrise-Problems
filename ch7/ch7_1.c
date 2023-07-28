#include <stdio.h>

int main() {
    short int i, n;

    printf("This program prints a table of squares. \n");
    printf("Enter number of entries in table: ");
    scanf("%hd", &n);

    for (i = 1; i <= n; i++) {
        printf("%20hd%20hd\n", i, i * i);
    }
}