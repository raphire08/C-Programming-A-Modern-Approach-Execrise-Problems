#include <stdio.h>

int main() {
    int h, m;
    char ch;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &h, &m, &ch);
    if (h == 12) {
        if (ch == 'A' || ch == 'a') {
            h = 0;
        }
    } else if (ch == 'P' || ch == 'p') {
        h += 12;
    }
    printf("24-hour time: %.2d:%.2d \n", h, m);
}