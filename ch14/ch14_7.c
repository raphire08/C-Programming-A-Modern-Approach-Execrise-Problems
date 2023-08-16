#include <stdio.h>

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}                               \

GENERIC_MAX(long);

int main(void) {
    printf("%ld\n", long_max((unsigned long)5, (unsigned long)6));
}