#include <stdio.h>

int main() {
    int n;
    int i = 2;
    printf("Enter a number: ");
    scanf("%d", &n);
    int square = 1;
    if (n <= 1) {
        printf("No even numbers to print squares \n");
    }
    else {
        while (n >= square) {
            printf("%d \n", i * i);
            i += 2;
            square = i * i;
        }
    }
}