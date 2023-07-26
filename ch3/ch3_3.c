#include <stdio.h>

int main() {
    int a, b, c, d, e;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &e);
    printf("GS1 Prefix: %d \n", a);
    printf("Group Identifier: %d \n", b);
    printf("Publisher Code: %d \n", c);
    printf("Item number: %d \n", d);
    printf("Check digit: %d \n", e);
}