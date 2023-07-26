#include <stdio.h>
#include <math.h>

#define MULTIPLIER 4.0f / 3.0f

int main() {
    int r;
    printf("Enter the value of radius: ");
    scanf("%d", &r);
    float volume = MULTIPLIER * M_PI * r * r* r;
    printf("The volume is: %f \n", volume);
}