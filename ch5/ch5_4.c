#include <stdio.h>

int main() {
    int wind_speed;

    printf("Enter the wind speed in knots: ");
    scanf("%d", &wind_speed);
    if(wind_speed < 1) {
        printf("Caml");
    } else if(wind_speed < 4) {
        printf("Light Air");
    } else if (wind_speed < 28) {
        printf("Breeze");
    } else if(wind_speed < 48) {
        printf("Gale");
    } else if(wind_speed <= 63) {
        printf("Storm");
    } else {
        printf("Hurricane");
    }
}
