#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    do {
        printf("%d", n % 10);
        n = n / 10;
    } while (n != 0);
    printf("\n");
}