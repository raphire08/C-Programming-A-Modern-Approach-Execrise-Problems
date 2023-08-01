#include <stdio.h>
#include <math.h>

int main() {
    double number;
    printf("Enter a positive number: ");
    scanf("%lf", &number);
    double y = 1;
    double diff = 1;
    while (diff > 0.00001 * y) {
        double y_new = (y + (number / y)) / 2;
        diff = fabs(y_new - y);
        y = y_new;
    }
    printf("Square root is: %f \n", y);
}