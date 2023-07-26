#include <stdio.h>

int main() {
    int n;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    int hundreds = n / 100;
    n -= hundreds * 100;
    int ones = n % 10;
    int tens = n / 10;
    printf("The reversal is: %d%d%d \n", ones, tens, hundreds);
}