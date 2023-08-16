#include <stdio.h>

#define CHECK(x, y, n) (((x) >= 0) && ((y) >= 0) && ((x) <= (n - 1)) && ((y) <= (n-1))) ? 1 : 0
#define MEDIAN(x, y, z) ((y) > (x) > (z)) ? (x) : ((x) > (y) > (z)) ? (y) : (z)

int main(void) {
    printf("%d\n", CHECK(100, 13, 56));
    printf("%d\n", MEDIAN(50, 45, 50));
}