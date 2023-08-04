#include <stdio.h>

void reduce(int num, int den, int* red_num, int* red_den);

int main() {
    int num; int den;
    int red_num, red_den;
    printf("Enter a fraction x/x: ");
    scanf("%d/%d", &num, &den);

    reduce(num, den, &red_num, &red_den);

    printf("In lowest terms: %d/%d \n", red_num, red_den);
}

void reduce(int num, int den, int* red_num, int* red_den) {
    int m = num; int n = den;
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    *red_num = num / m;
    *red_den = den / m;
}