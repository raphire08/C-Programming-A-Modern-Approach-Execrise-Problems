#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;
bool matched = true;

void stack_overflow() {
    printf("Stack overflow\n");
    exit(0);
}

void stack_underflow() {
    printf("stack underflow\n");
    matched = false;
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

char pop(void) {
    if (is_empty()) {
        stack_underflow();
        return ' ';
    } else {
        top--;
        return contents[top + 1];
    }
}

char getTop() {
    if (is_empty()) {
        return ' ';
    } else {
        return contents[top];
    }
}

bool isMatchingBraces(char ch1, char ch2) {
    if (ch1 == '(' && ch2 == ')') {
        return true;
    } else if (ch1 == '{' && ch2 == '}') {
        return true;
    } else {
        return false;
    }
}

int main() {
    printf("Enter parantheses and/or braces: ");
    while (1) {
        char ch = getchar();
        if (ch == '(' || ch == '{') {
            push(ch);
        } else if (ch == ')' || ch == '}') {
            if (isMatchingBraces(getTop(), ch)) {
                pop();
            } else {
                matched = false;
            }
        } else if (ch == '\n') {
            if (!matched) {
                printf("Parantheses/Braces are not matched\n");
            } else if (is_empty()) {
                printf("Parantheses/Braces are matched\n");
            } else {
                printf("Parantheses/Braces are not matched\n");
            }
            exit(0);
        }
    }
}