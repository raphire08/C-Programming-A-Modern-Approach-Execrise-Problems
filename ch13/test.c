#include <string.h>
#include <stdio.h>

int main() {
    int i = strcmp("dog", "ebra");
    printf("%d\n", i);
    i = strcmp("ebra", "zebra");
    printf("%d\n", i);
}