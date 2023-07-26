#include <stdio.h>
#include <stdbool.h>

int main() {
    int hour, min;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);
    int hour_12;
    bool isAM = true;
    if(hour > 12) {
        hour_12 = hour - 12;
        isAM = false;
    } else {
        hour_12 = hour;
        isAM = true;
    }
    if(hour == 12) {
        isAM = false;
    }
    if(hour == 24) {
        isAM = true;
    }
    if(isAM == true) {
        printf("Equivalent 12 hour time: %d:%.2d AM \n", hour_12, min);
    } else {
        printf("Equivalent 12 hour time: %d:%.2d PM \n", hour_12, min);
    }
}