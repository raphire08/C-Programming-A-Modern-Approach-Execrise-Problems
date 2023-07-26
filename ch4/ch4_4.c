#include <stdio.h>

int getRem(int n) {
    return n % 8;
}

int main() {
    int n;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);
    int ones = n % 8;
    n = n / 8;
    int tens = getRem(n);
    n = n / 8;
    int hdrds = getRem(n);
    n = n / 8;
    int thou = getRem(n);
    n = n / 8;
    int tenthou = getRem(n);
    printf("In octal, your number is: %d%d%d%d%d \n", tenthou, thou, hdrds, tens, ones);
}