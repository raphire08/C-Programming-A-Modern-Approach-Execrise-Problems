#include <stdio.h>

int main() {
    int num1, den1, num2, den2;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &den1, &num2, &den2);
    int res_num = num1 * den2 + num2 * den1;
    int res_den = den2 + den1;
    printf("The sum is %d/%d \n", res_num, res_den);
}