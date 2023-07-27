#include <stdio.h>

int main() {
    float e = 1.0f;
    int n;
    printf("Enter the integer n upto which to calculate e: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int fact = 1;
        for (int j = 1; j <= i; j++) {
            fact = fact * j;
        }
        e = e + (1.0f / fact);
    }
    printf("Value of e upto %d terms is: %.10f \n", n, e);
}