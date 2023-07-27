#include <stdio.h>

int main() {
    int i, n, odd, square;

    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    square = 0;
    for (i = 1; i <= n; i++) {
        square += 2 * (i - 1) + 1;
        printf("%10d%10d\n", i, square);
    }
}