#include <stdio.h>

#define DOUBLE(x) (2*(x))

int main(void) {
    printf("Value: %d\n", DOUBLE(1 + 2));
    printf("%d\n", 4 / DOUBLE(2));
}

