#include <stdio.h>


int main() {
    int hour, min;
    int d1 = 8 * 60;
    int d2 = 9 * 60 + 43;
    int d3 = 11 * 60 + 19;
    int d4 = 12 * 60 + 47;
    int d5 = (12 + 2) * 60;
    int d6 = (12 + 3) * 60 + 45;
    int d7 = (12 + 7) * 60;
    int d8 = (12 + 9) * 60 + 45;
    printf("Enter a 24-hour time hh:mm: ");
    scanf("%d:%d", &hour, &min);

    int mins = hour * 60 + min;
    if(mins <= d1) {
        printf("Closest departure time is 08:00 AM , arriving at ");
    } else if (mins <= d2) {
        if(mins-d1 < d2-mins) {
            printf("Closest departure time is 08:00 AM, arriving at ");
        } else {
            printf("Closest departure time is 09:43 AM, arriving at ");
        }
    } else if(mins <= d3) {
        if(mins-d2 < d3-mins) {
            printf("Closest departure time is 09:43 AM, arriving at ");
        } else {
            printf("Closest departure time is 11:19 PM, arriving at ");
        }
    } else if(mins <= d4) {
        if(mins-d3 < d4-mins) {
            printf("Closest departure time is 11:19 AM, arriving at ");
        } else {
            printf("Closest departure time is 12:47 PM, arriving at ");
        }
    } else if(mins <= d5) {
        if(mins-d4 < d5-mins) {
            printf("Closest departure time is 12:47 PM, arriving at ");
        } else {
            printf("Closest departure time is 02:00 PM, arriving at ");
        }
    } else if(mins <= d6) {
        if(mins-d5 < d6-mins) {
            printf("Closest departure time is 02:00 PM, arriving at ");
        } else {
            printf("Closest departure time is 03:45 PM, arriving at ");
        }
    } else if(mins <= d7) {
        if(mins-d6 < d7-mins) {
            printf("Closest departure time is 03:45 PM, arriving at ");
        } else {
            printf("Closest departure time is 07:00 PM, arriving at ");
        }
    } else if(mins <= d8) {
        if(mins-d7 < d8-mins) {
            printf("Closest departure time is 07:00 PM, arriving at ");
        } else {
            printf("Closest departure time is 09:45 PM, arriving at ");
        }
    } else {
        printf("Closest departure time is 09:45 PM, arriving at ");
    }

}   