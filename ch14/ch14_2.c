#include <stdio.h>

#define NELEMS(a) ((int) (sizeof(a) / sizeof(a[0])))

int main(void) {
    int a[] = { 0, 1, 4 };
    char b[5] = { 'd', '7', '(', '#' };
    printf("Size: %d\n", NELEMS(a));
    printf("Size: %d\n", NELEMS(b));
}