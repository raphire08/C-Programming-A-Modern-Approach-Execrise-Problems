#include <stdio.h>


int main() {
    int hour, min;
    int departures[] = { 8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, (12 + 2) * 60, (12 + 3) * 60 + 45, (12 + 7) * 60, (12 + 9) * 60 + 45 };
    printf("Enter a 24-hour time hh:mm: ");
    scanf("%d:%d", &hour, &min);

    int mins = hour * 60 + min;

    for (int i = 0; i < 8; i++) {
        if (mins < departures[i]) {
            if (i == 0 || i == 7) {
                printf("Closest departure time is %d , arriving at ", departures[i]);
            } else if (mins - departures[i - 1] < departures[i] - mins) {
                printf("Closest departure time is %d, arriving at", departures[i - 1]);
            } else {
                printf("Closest departure time is %d, arriving at", departures[i]);
            }
            break;
        }

    }
}