#include <stdio.h>

int main() {
    int x;
    printf("Enter a integer x: ");
    scanf("%d", &x);
    int value = ((((((((3 * x) + 2) * x) - 5) * x) - 1 * x) + 7) * x) - 6;
    printf("Value of polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is %d \n", value);
}