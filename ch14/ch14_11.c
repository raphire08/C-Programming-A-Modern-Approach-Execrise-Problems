#include <stdio.h>


#define ERROR(x, y) fprintf(stderr, x, y)


int main() {
    int index = 0;
    ERROR("Range error: index = %d\n", index);
}