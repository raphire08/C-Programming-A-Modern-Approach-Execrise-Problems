#include <stdio.h>

int main() {
    int date, month, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &date, &month, &year);
    printf("You entered the date %.4d%.2d%.2d \n", year, month, date);
}