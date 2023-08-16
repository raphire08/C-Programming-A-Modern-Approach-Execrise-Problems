#include <stdio.h>

#define CUBE(x) ((x)*(x)*(x))
#define REM_FOUR(x) ((x) % 4)
#define NEW_BOOL(x, y) (((x) * (y) < 100) ? 1 : 0)

int main(void) {
    int x, y;

    printf("%d\n", CUBE(1));
    printf("Remainder: %d\n", REM_FOUR(27));
    printf("Enter x and y separated by space: ");
    scanf("%d %d", &x, &y);
    printf("New Boolean: %d\n", NEW_BOOL(x, y));
}
