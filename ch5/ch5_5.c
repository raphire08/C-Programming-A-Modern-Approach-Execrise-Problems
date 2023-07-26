#include <stdio.h>

int main() {
    float income;
    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);
    float tax;
    if(income <= 750) {
        tax = 0.01 * income;
    } else if (income <= 2250) {
        tax = 7.5 + (0.02 * (income - 750));
    } else if (income <= 3750) {
        tax = 37.5 + (0.03 * (income - 2250));
    } else if (income <= 5250) {
        tax = 82.5 + (0.04 * (income - 3750));
    } else if (income <= 7000) {
        tax = 142.5 + (0.05 * (income - 5250));
    } else {
        tax = 230 + (0.06 * (income - 7000));
    }

    printf("Tax due is: %.3f \n", tax);

}