#include <stdio.h>

int main() {
    int d0 = 1; int m0 = 1; int y0 = 1900;
    int d1, m1, y1, d2, m2, y2;
    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    int epoch1 = (y1 - y0) * 365 + (m1 - m0) * 30 + (d1 - d0);
    int epoch2 = (y2 - y0) * 365 + (m2 - m0) * 30 + (d2 - d0);

    if(epoch1 < epoch2) {
        printf("%d/%d/%d is earlier than %d/%d/%d \n", m1, d1, y1, m2, d2, y2);
    } else {
        printf("%d/%d/%d is earlier than %d/%d/%d \n", m2, d2, y2, m1, d1, y1);
    }

}