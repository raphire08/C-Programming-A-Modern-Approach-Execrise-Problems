#include <stdio.h>

int main() {
    int n;
    printf("Enter a two digit number: ");
    scanf("%d", &n);
    int ones = n % 10;
    int tens = n / 10;
    printf("The reversal is: %d%d \n", ones, tens);
}