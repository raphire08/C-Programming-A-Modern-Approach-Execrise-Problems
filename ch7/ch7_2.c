#include <stdio.h>

int main() {
    int i, n;
    int j = 1;
    printf("This program prints a table of squares. \n");
    printf("Enter number of entries in table: ");
    while (j) {
        scanf("%d", &n);

        for (i = 1; i <= 24; i++) {
            printf("%20d%20d\n", i, i * i);
        }
        printf("Press ENTER to continue... ");

        while (getchar() != '\n');
    }
}