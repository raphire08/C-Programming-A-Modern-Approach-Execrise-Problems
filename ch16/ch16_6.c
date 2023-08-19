#include <stdio.h>

struct date {
    int day;
    int year;
    int month;
};

int compare_dates(struct date d1, struct date d2);

int main() {
    int d0 = 1; int m0 = 1; int y0 = 1900;
    int d1, m1, y1, d2, m2, y2;
    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    struct date date1 = { d1, m1, y1 };
    struct date date2 = { d2, m2, y2 };

    int comparison = compare_dates(date1, date2);

    if (comparison < 0) {
        printf("%d/%d/%d is earlier than %d/%d/%d \n", m1, d1, y1, m2, d2, y2);
    } else if (comparison > 0) {
        printf("%d/%d/%d is earlier than %d/%d/%d \n", m2, d2, y2, m1, d1, y1);
    } else {
        printf("%d/%d/%d is same as %d/%d/%d \n", m2, d2, y2, m1, d1, y1);
    }

}


int compare_dates(struct date d1, struct date d2) {
    if (d1.year < d2.year) {
        return -1;
    } else if (d1.year > d2.year) {
        return 1;
    } else {
        if (d1.month < d2.month) {
            return -1;
        } else if (d1.month > d2.month) {
            return 1;
        } else {
            if (d1.day < d2.day) {
                return -1;
            } else if (d1.day > d2.day) {
                return 1;
            } else {
                return 0;
            }
        }
    }
}