#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent % 2 == 0) {
        return power(base, exponent / 2) * power(base, exponent / 2);
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int x, n;;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);

    printf("%d^%d is %f \n", x, n, power(x, n));
}