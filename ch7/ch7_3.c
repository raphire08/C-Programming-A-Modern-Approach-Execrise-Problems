#include <stdio.h>

int main() {

    double n, sum = 0.0;

    printf("This program sums a series of numbers.\n");
    printf("Enter numbers 0 to terminate: ");
    while (n != 0) {
        scanf("%lf", &n);
        sum += n;
    }
    printf("The sum is %lf \n", sum);
}