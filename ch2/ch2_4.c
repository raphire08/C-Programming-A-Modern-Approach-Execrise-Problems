#include <stdio.h>

int main() {
    float amount;
    printf("Enter an amount like xxx.xx: ");
    scanf("%f", &amount);
    float total = 1.05 * amount;
    printf("With tax added:             $%.2f \n", total);
}