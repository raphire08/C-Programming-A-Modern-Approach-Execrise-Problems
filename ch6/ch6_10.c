#include <stdio.h>

int main() {
    int d0 = 1; int m0 = 1; int y0 = 1900;
    int d1, m1, y1;
    int d2, m2, y2;
    int i = 1;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    while (i) {
        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &m2, &d2, &y2);
        if (d2 == 0 && m2 == 0 && y2 == 0) {
            break;
        } else {
            int epoch1 = (y1 - y0) * 365 + (m1 - m0) * 30 + (d1 - d0);
            int epoch2 = (y2 - y0) * 365 + (m2 - m0) * 30 + (d2 - d0);
            if (epoch1 > epoch2) {
                d1 = d2; m1 = m2; y1 = y2;
            }
        }
    }
    printf("Earliest date is %d/%d/%d \n", m1, d1, y1);
}