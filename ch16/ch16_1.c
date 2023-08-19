#include <stdio.h>

struct dailing_code {
    char* country;
    int code;
};

const struct dailing_code country_codes[] =
{
    {"Argentina", 54},
    {"Bangladesh", 880},
    {"Brazil", 55},
    {"Myanmar", 95},
    {"China", 86},
    {"Germany", 49},
    {"India", 91},
    {"Italy", 39},
    {"Russia", 7},
    {"Uniked Kingdom", 44},
    {"United States",   1}
};

int main(void) {
    int code;
    size_t num_codes = sizeof(country_codes) / sizeof(country_codes[0]);

    printf("Enter dailing code: ");
    scanf("%d", &code);
    for (int i = 0; i < num_codes; i++) {
        if (country_codes[i].code == code) {
            printf("Country is %s\n", country_codes[i].country);
            return 0;
        }
    }
    printf("No country found for %d\n", code);
}