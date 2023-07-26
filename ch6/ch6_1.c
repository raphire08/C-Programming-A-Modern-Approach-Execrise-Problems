#include <stdio.h>

int main() {
    float n = 1.0f;
    float largest = 0;
    while(n > 0) {
        printf("Enter a number: ");
        scanf("%f", &n);
        if(n > largest) {
            largest = n;
        }
    }
    printf("The largest number entered was: %f \n", largest);
}