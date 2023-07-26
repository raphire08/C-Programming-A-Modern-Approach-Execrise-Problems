#include <stdio.h>

int main() {
    int num; int den;
    printf("Enter a fraction x/x: ");
    scanf("%d/%d", &num, &den);
    
    int m = num; int n = den;
     while(n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }

    printf("In lowest terms: %d/%d \n", num/m, den/m);
}