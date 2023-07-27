#include <stdio.h>

int main() {
    float e = 1.0f;
    float n;
    printf("Enter the floating point number upto which to calculate e: ");
    scanf("%f", &n);
    int i = 1;
    int count = 1;
    while (i) {
        int fact = 1;
        for (int j = 1; j <= count; j++) {
            fact = fact * j;
        }
        float term = 1.0f / fact;
        if (term < n) {
            break;
        } else {
            e = e + term;
        }
        count++;
    }
    printf("Value of e till %f term is: %.10f \n", n, e);
}