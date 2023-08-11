#include <stdio.h>


int main(void) {

    char* month_string[] = { "January", "February", "March", "April",
                            "May", "June", "July", "August", "September", "October",
                            "November", "December" };

    char date[100];
    char day_string[3];
    char year_string[5];

    int month, day, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    sprintf(day_string, "%2d", day);
    sprintf(year_string, "%4d", year);
    sprintf(date, "%s %s, %s", month_string[month - 1], day_string, year_string);
    printf("You entered the date %s\n", date);

}