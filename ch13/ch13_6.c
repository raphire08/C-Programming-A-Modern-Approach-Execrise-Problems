#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

void to_lower_case(char* str);

int main(int argc, char* argv[]) {
    char* planets[] = { "mercury", "venus", "earth", "mars", "jupiter", "saturn", "uranus", "pluto" };
    int i, j;
    for (i = 1; i < argc; i++) {
        to_lower_case(argv[i]);
        for (j = 0; j < NUM_PLANETS; j++) {
            if (strcmp(argv[i], planets[j]) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS) {
            printf("%s is not a planet\n", argv[i]);
        }
    }
}

void to_lower_case(char* str) {
    while (*str != '\0') {
        *str = tolower(*str);
        str++;
    }
}