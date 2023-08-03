#include <stdio.h>

double power(double base, int exponent) {
    double result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

double compute(double x) {
    return (3 * power(x, 5)) + (2 * power(x, 4)) - (5 * power(x, 3)) - power(x, 2) + (7 * power(x, 1)) - 6;
}

int main() {
    double x;
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Value of polynomial for %.3f is %.5f \n", x, compute(x));
}