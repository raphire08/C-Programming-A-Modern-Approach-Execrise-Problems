#include <stdio.h>
#include <math.h>

#define MULTIPLIER 4.0f / 3.0f

int main() {
    int r = 10;
    float volume = MULTIPLIER * M_PI * r * r * r;
    printf("Volume: %f \n", volume);
}