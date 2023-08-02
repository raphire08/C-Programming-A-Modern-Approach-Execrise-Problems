#include <stdio.h>

#define SIZE (int) (sizeof(a) / sizeof(a[0]))
#define N 10

int main() {
    int a[N];
    printf("Enter %d numbers: ", N);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }
    printf("Reverse numbers: ");
    for (int j = SIZE - 1; j >= 0; j--) {
        printf(" %d", a[j]);
    }
    printf("\n");
}