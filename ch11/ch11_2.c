#include <stdio.h>

void find_closest_flight(int desired_time, int* departure_time);

int main() {
    int hour, min;
    int departure_time;

    printf("Enter a 24-hour time hh:mm: ");
    scanf("%d:%d", &hour, &min);

    int mins = hour * 60 + min;

    find_closest_flight(mins, &departure_time);

    printf("Closest departure time is %d , arriving at\n", departure_time);

}


void find_closest_flight(int desired_time, int* departure_time) {
    int d1 = 8 * 60;
    int d2 = 9 * 60 + 43;
    int d3 = 11 * 60 + 19;
    int d4 = 12 * 60 + 47;
    int d5 = (12 + 2) * 60;
    int d6 = (12 + 3) * 60 + 45;
    int d7 = (12 + 7) * 60;
    int d8 = (12 + 9) * 60 + 45;

    int mins = desired_time;
    if (mins <= d1) {
        *departure_time = d1;
    } else if (mins <= d2) {
        if (mins - d1 < d2 - mins) {
            *departure_time = d1;
        } else {
            *departure_time = d2;
        }
    } else if (mins <= d3) {
        if (mins - d2 < d3 - mins) {
            *departure_time = d2;
        } else {
            *departure_time = d3;
        }
    } else if (mins <= d4) {
        if (mins - d3 < d4 - mins) {
            *departure_time = d3;
        } else {
            *departure_time = d4;
        }
    } else if (mins <= d5) {
        if (mins - d4 < d5 - mins) {
            *departure_time = d4;
        } else {
            *departure_time = d5;
        }
    } else if (mins <= d6) {
        if (mins - d5 < d6 - mins) {
            *departure_time = d5;
        } else {
            *departure_time = d6;
        }
    } else if (mins <= d7) {
        if (mins - d6 < d7 - mins) {
            *departure_time = d6;
        } else {
            *departure_time = d7;
        }
    } else if (mins <= d8) {
        if (mins - d7 < d8 - mins) {
            *departure_time = d7;
        } else {
            *departure_time = d8;
        }
    } else {
        *departure_time = d8;
    }

}
