#include <stdio.h>

int main() {
    int num1, den1, num2, den2;
    char op;
    printf("Enter two fractions separated by an operator ( + , -, * , /): ");
    scanf("%d/%d %c %d/%d", &num1, &den1, &op, &num2, &den2);
    int res_num, res_den;
    switch (op) {
        case '+':
            res_num = num1 * den2 + num2 * den1;
            res_den = den2 + den1;
            break;
        case '-':
            res_num = num1 * den2 - num2 * den1;
            res_den = den2 + den1;
            break;
        case '*':
            res_num = num1 * num2;
            res_den = den2 * den1;
            break;
        case '/':
            res_num = num1 * den2;
            res_den = den1 * num2;
            break;
        default:
            break;
    }
    printf("The sum is %d/%d \n", res_num, res_den);
}