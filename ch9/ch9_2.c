#include <stdio.h>

double getTax(double fixedValue, int percentage, double amount) {
    return fixedValue + ((percentage / 100.0) * amount);
}

int main() {
    float income;
    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);
    float tax;
    if (income <= 750) {
        tax = getTax(0.0, 1, income);
    } else if (income <= 2250) {
        tax = getTax(7.5, 2, (income - 750));
    } else if (income <= 3750) {
        tax = getTax(37.5, 3, (income - 2250));
    } else if (income <= 5250) {
        tax = getTax(82.5, 4, (income - 3750));
    } else if (income <= 7000) {
        tax = getTax(142.5, 5, (income - 5250));
    } else {
        tax = getTax(230, 6, (income - 7000));
    }

    printf("Tax due is: %.3f \n", tax);

}