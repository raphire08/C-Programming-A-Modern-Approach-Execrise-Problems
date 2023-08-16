#include <stdio.h>
#include <math.h>

#define DISP(f, x) printf("f(%g) = %g\n", (x), f(x))
#define DISP2(f, x, y) printf("f(%g, %g) = %g\n", (x), (y), f(x, y))

float max(float x, float y) {
    return x > y ? x : y;
}

int main(void) {
    DISP(sqrt, 4.0);
    DISP2(max, 3.0, 5.6);

}