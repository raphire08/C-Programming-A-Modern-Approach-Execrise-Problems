#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;
bool matched = true;

int read_line(char str[], int n);
int evaluate_RPN_expression(const char* expression);

void stack_overflow() {
    printf("Expression is too complex\n");
    exit(0);
}

void stack_underflow() {
    printf("Not enough operands in expression\n");
    exit(0);
}

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push(char ch) {
    if (is_full()) {
        stack_overflow();
    } else {
        top++;
        contents[top] = ch;
    }
}

int pop(void) {
    if (is_empty()) {
        stack_underflow();
        return -1;
    } else {
        top--;
        return contents[top + 1];
    }
}

int getTop() {
    if (is_empty()) {
        return -1;
    } else {
        return contents[top];
    }
}

int main() {
    char expression[STACK_SIZE + 1];
    do {
        printf("Enter an RPN expression: ");
        read_line(expression, STACK_SIZE + 1);
        int result = evaluate_RPN_expression(expression);
        printf("Value of an expression %d\n", result);
        make_empty();
    } while (1);
}

int read_line(char str[], int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int evaluate_RPN_expression(const char* expression) {
    while (*expression != '\0') {
        char ch = *expression;
        if (ch != ' ') {
            if (ch >= '0' && ch <= '9') {
                push(ch - '0');
            } else if (ch == '+') {
                int ch1 = pop();
                int ch2 = pop();
                push(ch1 + ch2);
            } else if (ch == '-') {
                int ch1 = pop();
                int ch2 = pop();
                push(ch2 - ch1);
            } else if (ch == '*') {
                int ch1 = pop();
                int ch2 = pop();
                push(ch2 * ch1);
            } else if (ch == '/') {
                int ch1 = pop();
                int ch2 = pop();
                push(ch2 / ch1);
            } else if (ch == '=') {
                return getTop();
            } else {
                exit(EXIT_SUCCESS);
            }
        }
        expression++;
    }

}