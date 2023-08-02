#include <stdio.h>

#define SIZE 10

int main() {
    int a[SIZE] = { 0 };
    const short digits[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number) {
        int n = number % 10;
        a[n]++;
        number = number / 10;
    }
    printf("Digit:\t\t");
    for (int i = 0; i < SIZE; i++) {
        printf(" %d", digits[i]);

    }
    printf("\nOccurences:\t");
    for (int j = 0; j < SIZE; j++) {
        printf(" %d", a[j]);
    }
    printf("\n");
}