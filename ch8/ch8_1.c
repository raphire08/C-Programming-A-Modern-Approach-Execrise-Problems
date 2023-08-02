#include <stdio.h>

#define SIZE 10

int main() {
    int a[SIZE] = { 0 };
    const short digits[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number) {
        int digit = number % 10;
        a[digit]++;
        number = number / 10;
    }
    printf("Repeated digits:");
    for (int i = 0; i < SIZE; i++) {
        if (a[i] >= 2) {
            printf(" %d", digits[i]);
        }
    }
    printf("\n");
}