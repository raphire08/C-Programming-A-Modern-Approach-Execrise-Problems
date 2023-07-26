#include <stdio.h>

int main() {
    int n, m;
    printf("Enter two integers separated by space: ");
    scanf("%d %d", &n, &m);
    while(n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    printf("Greatest common divisor: %d \n", m);
}