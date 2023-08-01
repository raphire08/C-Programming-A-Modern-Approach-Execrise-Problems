#include <stdio.h>

int main() {
    printf("Enter an expression: ");
    float operand1, operand2, value;
    char prevInput;
    scanf("%f", &value);
    while (1) {
        char ch = getchar();
        if (ch == '\n' || ch == EOF) {
            break;
        } else {
            scanf("%f", &operand2);
            if (ch == '+') {
                value = value + operand2;
            } else if (ch == '-') {
                value = value - operand2;
            } else if (ch == '*') {
                value = value * operand2;
            } else if (ch == '/') {
                value = value / operand2;
            }
        }
    }
    printf("Value of expression %f \n", value);
}