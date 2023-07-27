#include <stdio.h>

int main() {
    int n, s;
    printf("Enter the number of days in month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week: ");
    scanf("%d", &s);
    for (int i = 1; i < s; i++) {
        printf("    ");
    }
    for (int i = 1; i <= n; i++) {
        printf("%3d ", i);
        if ((i + s - 1) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}